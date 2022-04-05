#include <iostream>

using namespace std;
class Marks;
class Sports;

class Student 
{
    private:
        int rno;
        char sname[20];
    public:
        void getinfo()
        {
            cout << "Enter Roll Num And Name:";
            cin >> rno >> sname;
        }

        void putinfo()
        {
            cout << rno << ":" << sname << ":" << endl;
        }
};

class Marks 
{
    private:
        int m1, m2, m3;
    
    public:
        void  getmarks()
        {
            cout << "Enter M1 M2 and M3:";
            cin >> m1 >> m2 >> m3;
        }

        void putmarks()
        {
            cout << "\n Marks Obtained?";
            cout << "\n Marks 1:" << m1;
            cout << "\n Marks 2:" << m2;
            cout << "\n Marks 3:" << m3 << endl;
        }

        friend void statistics (Marks, Sports);
};

class Sports 
{
    private:
        int spmks;
    
    public: 
        void getmakrs()
        {
            cout << "sports Marks:";
            cin >> spmks;
        }

        void putmarks()
        {
            cout << "\n Sport Marks:"<< spmks;
        }
       friend void statistics (Marks, Sports);

};

void statistics (Marks m, Sports s)
{
    int tot;
    float avg;
    tot = m.m1 + m.m2 + m.m3 + s.spmks;
    avg = tot / 4.0;
    cout << "\n Total Marks:" << tot;
    cout << "\n Average:" << avg<< endl;
}

int main()
{
    Student st;
    Marks m;
    Sports s;

    st.getinfo();
    m.getmarks();
    s.getmakrs();

    st.putinfo();
    m.putmarks();
    s.putmarks();

    statistics(m ,s);
    return 0;
}