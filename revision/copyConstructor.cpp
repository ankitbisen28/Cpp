#include <iostream>
#include <string.h>
using namespace std;

class Student 
{
    private:
        int rno;
        char name[20];
        int age;

    public:
        Student(int r, char n[], int a)
        {
            rno = r;
            strcpy(name, n);
            age = a;
        }

        Student(Student &x)
        {
            rno = x.rno;
            strcpy(name, x.name);
            age = x.age;
        }

        void display()
        {
            cout << "\nRoll number :"<< rno;
            cout << "\nStudent Name :"<< name;
            cout << "\nStudent age :"<< age<< endl;
        }
};

int main()
{
    Student s1(1002, "Ankit", 23);
    s1.display();
    Student s2(1003, "Raam", 32);
    s2.display();

    Student s3 = s1;
    cout<< "\nAfter Copying";
    s3.display();
    return 0;
}