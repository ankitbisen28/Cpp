// WAP to the copy the content one file to another file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream f1,f2;
    char source[20], target [20], ch;
    cout<<"Enter source file name:";
    cin>> source;
    f1.open(source, ios::in);
    if(f1.fail())
    {
        cout<<"\n File not found:"<<source;
        exit(0);
    }
    cout<<"Enter Target Filename:";
    cin>> target;
    f2.open(target, ios::out);

    while (!f1.eof())
    {
        ch= f1.get();
        f2.put(ch);
    }
    f1.close();
    f2.close();
    cout<<"\n file (s) copied\n";
    
}