#pragma once

#include <unordered_map>
#include <vector>
#include <algorithm>

struct Level {
    int agg_size = 0;
    std::unordered_map<int, int> orders;
};

class OrderBook {
  public:
    void add(int order_id, char side, double price, int size) {
        if (side == 'B') {
            add_buyorder(order_id, price, size);
        } else if (side == 'S') {
            add_sellorder(order_id, price, size);
        }
    }

    void modify(int order_id, int new_size) {
        auto it = orderid_to_price.find(order_id);
        if (it == orderid_to_price.end()) {
            return;
        }

        auto price = it->second;

        {
            auto it = buy_book.find(price);
            if (it != buy_book.end()) {
                auto &level = it->second;
                auto old_size = level.orders[order_id];
                level.orders[order_id] = new_size;
                level.agg_size += (new_size - old_size);
                return;
            }
        }
        {
            auto it = sell_book.find(price);
            if (it != sell_book.end()) {
                auto &level = it->second;
                auto old_size = level.orders[order_id];
                level.orders[order_id] = new_size;
                level.agg_size += (new_size - old_size);
                return;
            }
        }
    }

    void remove(int order_id) {
        auto it = orderid_to_price.find(order_id);
        if (it == orderid_to_price.end()) {
            return;
        }

        auto price = it->second;
        orderid_to_price.erase(it);

        {
            auto it = buy_book.find(price);
            if (it != buy_book.end()) {
                auto &level = it->second;
                auto size = level.orders[order_id];
                level.agg_size -= size;
                level.orders.erase(order_id);

                if (level.agg_size <= 0) {
                    buy_book.erase(it);
                }
                return;
            }
        }
        {
            auto it = sell_book.find(price);
            if (it != sell_book.end()) {
                auto &level = it->second;
                auto size = level.orders[order_id];
                level.agg_size -= size;
                level.orders.erase(order_id);

                if (level.agg_size <= 0) {
                    sell_book.erase(it);
                }
                return;
            }
        }
    }

    double get_price(char side, int level) {
        if (side == 'B') {
            // level is outside range
            if (level > buy_book.size()) {
                return 0;
            }

            std::vector<double> prices;
            prices.reserve(buy_book.size());

            for (auto &it : buy_book) {
                prices.push_back(it.first);
            }
            // reverse sort prices
            std::sort(prices.begin(), prices.end(), std::greater<double>());
            return prices[level - 1];

        } else if (side == 'S') {
            // level is outside range
            if (level > sell_book.size()) {
                return 0;
            }

            std::vector<double> prices;
            prices.reserve(sell_book.size());

            for (auto &it : sell_book) {
                prices.push_back(it.first);
            }
            // reverse sort prices
            std::sort(prices.begin(), prices.end());
            return prices[level - 1];
        }
        return 0;
    }

    int get_size(char side, int level) {
        if (side == 'B') {
            // level is outside range
            if (level > buy_book.size()) {
                return 0;
            }

            std::vector<double> prices;
            prices.reserve(buy_book.size());

            for (auto &it : buy_book) {
                prices.push_back(it.first);
            }
            // reverse sort prices
            std::sort(prices.begin(), prices.end(), std::greater<double>());
            return buy_book[prices[level - 1]].agg_size;

        } else if (side == 'S') {
            // level is outside range
            if (level > sell_book.size()) {
                return 0;
            }

            std::vector<double> prices;
            prices.reserve(sell_book.size());

            for (auto &it : sell_book) {
                prices.push_back(it.first);
            }
            // reverse sort prices
            std::sort(prices.begin(), prices.end());
            return sell_book[prices[level - 1]].agg_size;
        }
        return 0;
    }

  private:
    void add_buyorder(int order_id, double price, int size) {
        auto it = buy_book.find(price);
        // add a new level if price level is not present
        if (it == buy_book.end()) {
            buy_book[price] = Level();
        }

        orderid_to_price[order_id] = price;
        // add to buy book
        buy_book[price].orders[order_id] = size;
        buy_book[price].agg_size += size;
    }

    void add_sellorder(int order_id, double price, int size) {
        auto it = sell_book.find(price);
        // add a new level if price level is not present
        if (it == sell_book.end()) {
            sell_book[price] = Level();
        }

        orderid_to_price[order_id] = price;
        // add to buy book
        sell_book[price].orders[order_id] = size;
        sell_book[price].agg_size += size;
    }

  private:
    std::unordered_map<double, Level> buy_book, sell_book;
    std::unordered_map<int, double> orderid_to_price;
};
