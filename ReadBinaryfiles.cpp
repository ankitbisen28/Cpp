// Write a  program to read the content of binary files "marks.txt" and the display the Content of banery.
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
    ifstream f1("mark.txt", ios::in | ios::binary);
    students s1;
    while(f1.read((char *)&s1, sizeof(s1)))
    {
        cout<<s1.rno<<"\t"<<s1.sname<<"\t"<<s1.m1<<"\t"<<s1.m2<<"\t"<<s1.m3<<endl;
    }
    f1.close();

    return 0;
};
