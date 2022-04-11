#include <iostream>
#include <string.h>

using namespace std;

class Account 
{
    private:
        int acno;
        char cname[30];
        float balance;
    
    public:
        Account()
        {
            acno= 10101;
            strcpy(cname, "Ankit");
            balance= 1000;
        }
        Account(int a , char c[], float b)
        {
            acno= a;
            strcpy(cname, c);
            balance= b;
        }

        void display()
        {
            cout << "\n Account No:" << acno;
            cout << "\n Customer Name:" << cname;
            cout << "\n Balance:" << balance << endl;
        }

        void moneytransfer(Account &x , int money)
        {
            x.balance = x.balance + money;
            balance = balance - money;
        }
};

int main()
{
    int money;
    Account obj1;
    Account obj2 (10102, "mehul", 30000);
    obj1.display();
    
    cout << "\n \n How much money you want to transfer? :";
    cin >> money;

    obj2.moneytransfer(obj1, money);
    cout << "\n ================";
    cout << "\n After transiction";
    obj1.display();
    obj2.display();
    return 0;
}