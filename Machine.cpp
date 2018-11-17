#include "Machine.h"

Machine::Machine() {
    arr[0].setName("Chocolate");
    arr[0].setPrice(4.5);

    arr[1].setName("Chipsy");
    arr[1].setPrice(5);

    arr[2].setName("Gum");
    arr[2].setPrice(3);

    arr[3].setName("Soft Drink");
    arr[3].setPrice(6.5);

    arr[4].setName("Hot Drink");
    arr[4].setPrice(8);

    arr[5].setName("Biscuit");
    arr[5].setPrice(2.5);

    arr[6].setName("Cake");
    arr[6].setPrice(1.5);

    arr[7].setName("Sandwich");
    arr[7].setPrice(22);

    arr[8].setName("Ice Cream");
    arr[8].setPrice(10);

    arr[9].setName("Snacks");
    arr[9].setPrice(16);
}

double Machine::buyItem(int id,double money){
    if(money >= arr[id].getPrice()) {
        arr[id].getitem();
        money -= arr[id].getPrice();
        return money;
    }
    else
        return -1;
}

bool Machine::check() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i].getQuantity();
    }
    if (sum == 0)
        return false;
    else
        return true;
}
