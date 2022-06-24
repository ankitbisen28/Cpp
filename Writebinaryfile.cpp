// Write a  program to create binary files "marks.txt" and the store the students details.
#include <iostream>
#include <fstream>

using namespace std;

struct students
{
    int rno;
    char sname[20];
    int m1, m2, m3;
};

int main()
{
    ofstream f1("mark.txt", ios::out | ios::binary);
    char ch;
    struct students s1;
    do
    {
        cout<<"Enter Roll number:";
        cin>> s1.rno;
        cout<< "Student Name:";
        cin>> s1.sname;
        cout<<"m1 m2 and m3:";
        cin>>s1.m1>>s1.m2>>s1.m3;

        f1.write((char *)&s1, sizeof(s1));
        cout<<"\n Record has been saved..";
        cout<<"create Another record (y/n)?:";
        cin>>ch;
    }
    while (ch ='y' || ch == 'Y');
        f1.close();

    return 0;
};
