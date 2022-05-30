#include <iostream>
#include <stdlib.h>

using namespace std;
 
class Marksheet 
{
    private: 
        int rno; 
        char sname[20];
        int m1, m2, m3, tot;
        float avg;

    public: 
        void getinfo()
        {
            cout << "Enter Roll number and Name:";
            cin >> rno >> sname;
            cout << "Enter Mark of M1 M2 M3:";
            cin >> m1 >> m2 >> m3;
        }

    ~Marksheet()
    {
        cout << "I'm in Action";
    }

        void putinfo()
        {
            tot = m1 + m2 + m3;
            avg = tot / 3.0;
            cout << "\n Student Name:" << sname;
            cout << "\n Total marks:" << tot;
            cout << "\n Average :" << avg << endl;
        }
};

int main()
{
    Marksheet *ptr;
    char choice;
    do {
        system("cls");
        ptr = new Marksheet;
        ptr -> getinfo();
        ptr -> putinfo();
        cout << "\n Do you want to Generate another (y/n):";
        cin >> choice;
        delete ptr;
    }
    while(choice == "y" || choice == "Y");
    return 0;
    
}
