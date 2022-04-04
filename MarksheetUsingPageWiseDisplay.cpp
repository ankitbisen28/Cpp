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
        void putinfor();
};

void Marksheet::getinfo()
{
    cout<< "Roll num and Name:";
    cin >> rno >> sname;
    cout << "M1 M2 M3 :";
    cin >>m1 >> m2 >> m3;
}

void Marksheet::putinfor()
{
    tot = m1 + m2 + m3;
    avg = tot/3.0;
    cout << "Student Name:" << sname << endl;
    cout << "Total Marks:" << tot << endl;
    cout << "Average:" << avg << endl;
    cout << "----------------------"<< endl;
}
 
int main()
{
    Marksheet obj [100];
    int i, n, pg=1;
    cout << "For How many students?:";
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        obj[i].getinfo();
    }
    for ( i = 0; i < n; i++)
    {
        if(pg<=4)
        {
        obj[i].putinfor();
        pg++;
        }
        else
        {
            cout<<"\n Press any key to continue....";
            pg=1;
            i--;
        }
    }
    
    return 0;
}