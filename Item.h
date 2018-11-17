#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item
{
private:
    string name;
    double price;
    static int quantity;

public:

    string getName() { return name; }
    void setName(string name) { this->name = name; }
    double getPrice() { return price; }
    void setPrice(double price) { this->price = price; }
    void getitem() { quantity--; }
    int getQuantity() { return quantity; }

};

#endif // ITEM_H
