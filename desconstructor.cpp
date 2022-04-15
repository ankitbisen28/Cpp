#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    private:
        char *sname;
        int rno, len;

    public:
        Student(int r ,char *s)
        {
            len = strlen(s);
            sname = new char [len + 1];
            rno = r;
            strcpy(sname, s);
        }
        ~Student()
        {
            cout << "\n Memory Delocated Successfully";
            delete sname;
        }

        void display()
        {
            cout << "Roll Number :" << rno << endl;
            cout << "Student Name:" << sname << endl;
        }
};

int main()
{
    Student s1(1001, "Ankit");
    s1.display();

    Student s2(1002, "Shubham");
    s2.display();
    return 0;
}
