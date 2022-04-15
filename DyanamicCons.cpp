#include <iostream>
#include <string.h>

using namespace std;

class Student 
{
    private:
        char *sname;
        int rno;

    public:
        Student(int r, char *s)
        {
            int len = strlen(s);
            sname = new char[len + 1];
            rno = r;
            strcpy(sname ,s);
        }

        void display()
        {
            cout <<"Roll Number:" << rno << endl;
            cout << "Student name:" << sname << endl;
        }
};

int main()
{
    Student s1(1001, "Himanshu");
    s1.display();

    Student s2(1002, "Aziz");
    s2.display();
}