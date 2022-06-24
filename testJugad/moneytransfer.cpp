#include <iostream>
#include <string.h>

using namespace std;

class Accoutnt 
{
    private:
        int acno;
        char cname[20];
        float balance;

    public:
        Accoutnt()
        {
            acno = 1003;
            strcpy(cname, "ankit");
            balance = 35000;
        }

        Accoutnt(int a, char c[], float b)
        {
            acno = a;
            strcpy(cname, c);
            balance = b;
        }

        void display()
        {
            cout<< "\n Account Num :" << acno;
            cout<< "\n Customer name :" << cname;
            cout << "\n Balance :" << balance;
        }

        void MoneyTransfer(Accoutnt &x, int money)
        {
            x.balance = x.balance + money;
            balance = balance - money;
        }
};

int main()
{
    int money;
    Accoutnt obj1;
    Accoutnt obj2(1345, "raj", 10000);
    obj1.display();

    cout<< "\n How much money you want to transfer: ";
    cin>> money;

    obj2.MoneyTransfer(obj1, money);
    cout<< "\n=============================";
    cout << "\n After Transition";
    obj1.display();
    obj2.display();
    return 0;
}