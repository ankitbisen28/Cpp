#include <iostream>

using namespace std;

class Marksheet
{
    private:
        char sname[20];
        int m1, m2, m3;
        float avg, tot;

    public:
        void getinfo();
        void process();
        void putinfo();
};

void Marksheet::getinfo()
{
    cout<<"Enter Student name: ";
    cin>>sname;
    cout<< "Studente marks M1 M2 and M3 :";
    cin>> m1>> m2>> m3;
};

void Marksheet::process()
{
    tot = m1 + m2 + m3;
    avg = tot / 3.0;
};

void Marksheet::putinfo()
{
    cout<<"Total Marks :"<<tot;
    cout<<"\nAverage % :"<<avg<< endl;
}

int main()
{
    Marksheet obj;
    obj.getinfo();
    obj.process();
    obj.putinfo();
    return 0;
}