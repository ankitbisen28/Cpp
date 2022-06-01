// WAP to read any filename display the content on the screen and cout total numbers of word;
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream f1 ;
    char fname[20], ch;
    int word = 1;
    cout << "\n Enter Any File name:";
    cin>>fname;
    f1.open(fname, ios::in);
    if(f1.fail())
    {
        cout<<"\n File not found:"<< fname;
        exit(0);
    }
    while(!f1.eof())
    {
        ch= f1.get();
        cout<<ch;
        if(ch = ' ' || ch == '\n')
        {
            word++;
        }
        cout<<"\n Total number of words:"<< word << endl;
        f1.close();
    }
}