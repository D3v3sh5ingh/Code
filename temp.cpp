#include <bits/stdc++.h>
using namespace std;

class dataT
{
    char action, side;
    unsigned int quantity, price;
    dataT(char a, char s, unsigned int q, unsigned int p)
    {
        action = a;
        side = s;
        quantity = q;
        price = p;
    }
};
class FeedHandler
{
public:
    queue<dataT> q;
    set<string> buyOrderId, sellOrderId;
    vector<string> logerror;
    FeedHandler();
    void processMessage(string action, string order_id, string side, int quantity, int price);
    void printCurrentOrderBook(std::ostream &os) const;
};
int main(int argc, char **argv)
{
    FeedHandler feed;
    std::string line;
    const std::string filename(argv[1]);
    std::ifstream infile(filename.c_str(), ios::in);
    int counter = 0;
    while (std::getline(infile, line))
    {
        string action, order_id, side;
        int quantity, price;
        processLine(line, action, order_id, side, quantity, price);

        feed.processMessage(action, order_id, side, quantity, price);
        if (++counter % 10 == 0)
        {
            feed.printCurrentOrderBook(std::cerr);
        }
    }
    feed.printCurrentOrderBook(std::cout);
    return 0;
}
void processLine(string line, string &action, string &order_id, string &side, int &quantity, int &price)
{
    // Code to parse line
}
void FeedHandler::processMessage(string action, string order_id, string side, int quantity, int price)
{

    switch (action)
    {
    case "A":
        if (side == 'B')
            newBuyOrder(order_id, quantity, price);
        else
            newSellOrder(order_id, quantity, price);
        break;
    case "X":
        if (side == 'B')
            cancelBuyOrder(order_id, quantity, price);
        else
            cancelSellOrder(order_id, quantity, price);
        break;
    case "M":
        if (side == 'B')
            modifyBuyOrder(order_id, quantity, price);

        else
            modifySellOrder(order_id, quantity, price);
        break;

    case "T":
        q.push_back(dataT('T', 0, 0, quantity, price));
        break;

    default:
        logerror.push_back("Wrong entry " + order_id);
        break;
    }
}
void newBuyOrder(string order_id, int quantity, int price)
{
    if (buyOrderId.count(order_id) > 0)
    {
        logerror.push_back("Duplicate order_id! New buy order not added " + order_id);
    }
    else
    {
        q.push_back(dataT('b', order_id, quantity, price));
        buyOrderId.insert(order_id);
    }
}

void newSellOrder(string order_id, int quantity, int price)
{
    if (sellOrderId.count(order_id) > 0)
    {
        logerror.push_back("Duplicate order_id! New buy order not added " + order_id);
    }
    else
    {
        q.push_back(dataT('b', order_id, quantity, price));
        sellOrderId.insert(order_id)
    }
}

void cancelSellOrder(string order_id, int quantity, int price)
{
    if (sellOrderId.count(order_id) > 0)
    {
        logerror.push_back("Duplicate order_id! New buy order not added " + order_id);
    }
}
void cancelBuyOrder(string order_id, int quantity, int price)
{
    if (buyOrderId.count(order_id) > 0)
    {
        logerror.push_back("Duplicate order_id! New buy order not added " + order_id);
    }
}
void modifyBuyOrder(string order_id, int quantity, int price)
{
    if (buyOrderId.count(order_id) > 0)
    {
        logerror.push_back("Duplicate order_id! New buy order not added " + order_id);
    }
}
void modifysellOrder(string order_id, int quantity, int price)
{
    if (sellOrderId.count(order_id) > 0)
    {
        logerror.push_back("Duplicate order_id! New buy order not added " + order_id);
    }
}