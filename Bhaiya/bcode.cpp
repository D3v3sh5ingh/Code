#include <iostream>

#include "orderbook.hpp"

/*
 * Instructions
 * Compile:
        - g++ main.cpp
 * Run:
        - ./a.out < input1
        - ./a.out < input2
 */

int main() {
    OrderBook book;

    std::string cmd, subcmd;
    int order_id;
    std::string side;
    // it is not specified in the questions whether the price can go negative or not
    // e.g. prices of spread contracts
    double price;
    int size;
    int level;

    while (not std::cin.eof()) {
        std::cin >> cmd;

        if (cmd == "add") {
            std::cin >> order_id >> side >> price >> size;
            book.add(order_id, side[0], price, size);
            // std::cout << "add " << order_id << " " << side[0] << " " << price << " " << size
            // << std::endl;

        } else if (cmd == "modify") {
            std::cin >> order_id >> size;
            book.modify(order_id, size);
            // std::cout << "modify " << order_id << " " << size << std::endl;

        } else if (cmd == "remove") {
            std::cin >> order_id;
            book.remove(order_id);
            // std::cout << "remove " << order_id << std::endl;

        } else if (cmd == "get") {
            std::cin >> subcmd;
            std::cin >> side >> level;

            if (subcmd == "price") {
                auto px = book.get_price(side[0], level);
                if (px != 0) {
                    std::cout << px << std::endl;
                }
                // std::cout << "get price " << side[0] << " " << level << std::endl;

            } else if (subcmd == "size") {
                auto sz = book.get_size(side[0], level);
                if (sz != 0) {
                    std::cout << sz << std::endl;
                }
                // std::cout << "get size " << side[0] << " " << level << std::endl;
            }
        }
    }
    return 0;
}
