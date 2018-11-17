#include <iostream>
#include "Machine.h"
#include "User.h"

using namespace std;

const string arr[10] = {"Chocolate (4.5 LE)", "Chipsy (5 LE)", "Gum(3 LE)", "Soft Drink (6.5 LE)", "Hot Drink (8 LE)",
                            "Biscuit (2.5 LE)", "Cake (1.5 LE)", "Sandwich (22 LE)", "Ice Cream (10 LE)", "Snacks (16 LE)"};
int main()
{
    Machine machine;
    double my_money = 0;

    while(machine.check()) {

        cout << "\nWelcome user enter your money : ";
        cin >> my_money;
        string process;
        cout << "\nEnter (10) to end the buying process or any key to continue... ";
        cin >> process;
        if(process == "10") {
            get_remain_money(my_money);
            continue;
        }

        int chooice;
        do {
            cout << "\nOur Items are:\n-------------------\n";
            for(int i=0;i<10;i++) {
                cout << i << " - " << arr[i] << endl;
            }
            cout << "   > Enter (0-9) to Buy an item / (-1) to End: ";
            cin >> chooice;
            if(chooice<10 && chooice>=0) {
                double temp = machine.buyItem(chooice, my_money);
                if(temp == -1) {
                    cout<<"-------------------\nChoose an item you can afford! \n-------------------\n";
            }
                else
                    my_money = temp;
            }
            else {
                cout << "-------------------\nNot an item ! \n-------------------\n";
            }
    } while(chooice != -1);

        get_remain_money(my_money);
    }
    return 0;
}
