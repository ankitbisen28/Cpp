#include <iostream>

using namespace std;
 
class Student 
{
    private:
        int rno;
        char sname[20];
    
    public: 
        void getinfo()
        {
            cout << "Enter RollNumber and Name: ";
            cin >> rno >> sname;
        }

        void putinfo()
        {
            cout << "\n Roll Number :" << rno;
            cout << "\n Student Name :" << sname << endl;
        }
};

class Marks : public Student
{
    protected: 
        int m1 ,m2 ,m3;

    public:
        void getmarks()
        {
            cout << "Enter M1 M2 AND M3:" ;
            cin >> m1 >> m2 >> m3;
        }

        void putmarks()
        {
            cout << "\n Marks obtained";
            cout << "\n Mark 1 : " << m1;
            cout << "\n Mark 2 : " << m2;
            cout << "\n Mark 3 : " << m3 << endl;
        }
};

class Sports
{
    protected:
        int spmks;

    public:
        void getspmarks()
        {
            cout << "Enter sports Marks: ";
            cin >> spmks;
        }

        void putspmkmarks()
        {
            cout << "\n Sports Marks :" << spmks << endl;
        }
};

class Result : public Marks, public Sports
{
    private:
        int tot;

    public:
        void display()
        {
            tot = m1 + m2 + m3 + spmks;
            putinfo();
            putmarks();
            putspmkmarks();
            cout << "\n Total Marks: " << tot << endl;
        }
};

int main()
{
    Result obj;
    obj.getinfo();
    obj.getmarks();
    obj.getspmarks();
    obj.display();
    return 0;
}