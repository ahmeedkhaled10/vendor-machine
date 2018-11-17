#ifndef MACHINE_H_
#define MACHINE_H_

#include "Item.h"

class Machine {

private:
    Item arr[10];

public:
        Machine();
        double buyItem(int id, double money);
        bool check();
};

#endif // MACHINE_H_
