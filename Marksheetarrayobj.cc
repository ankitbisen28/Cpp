#include <iostream>

using namespace std;
class Marksheet 
{
    private:
        int rno;
        char sname[20];
        int m1,m2,m3,tot;
        float avg;

    public:
        void getinfo();
        void putinfo();
};

void Marksheet::getinfo()
{
    cout << "Enter Roll num and Name?:";
    cin >> rno >> sname;
    cout << "Marks of 3 subjects:";
    cin >> m1 >> m2 >> m3;
}

void Marksheet::putinfo()
{
    tot= m1+m2+m3;
    avg =tot/3.0;
    cout << "\n Student Name:"<< sname;
    cout << "\n Total Marks:" << tot ;
    cout << "\n Average:" << avg << endl;
}

int main()
{
    Marksheet obj[2];
    for (int i = 0; i < 2; i++)
    {
        obj[i].getinfo();
    }
    for (int i = 0; i < 2; i++)
    {
        obj[i].putinfo();
    }
    return 0;
};