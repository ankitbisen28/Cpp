#include <iostream>

using namespace std;

class Marksheet
{
    private:
        char sname[20];
        int m1,m2,m3,tot;
        float avg;
    
    public:
        void getinfo(); // declaration only
        void process();
        void putinfo();
};

    void Marksheet::getinfo()
    {
        cout<< "Student Name:";
        cin >>sname;
        cout <<"M1 M2 M3:";
        cin >> m1 >> m2 >> m3;
    }

    void Marksheet::process()
    {
        tot = m1+m2+m3;
        avg= tot /3.0;
    }

    void Marksheet::putinfo()
    {
        cout << "Studente Name:"<< sname;
        cout << "Average:"<< avg;
    }

    int main()
    {
        Marksheet obj;
        obj.getinfo();
        obj.process();
        obj.putinfo();
    }