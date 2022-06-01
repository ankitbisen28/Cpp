// WAP to display the content of specific file cout total number of vovels in ti.
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    ifstream f1;
    char fname[20], ch;
    int ct=0;
    cout<<"\n Enter any filename:";
    cin>> fname;

    f1.open(fname, ios::in);
    if(f1.fail())
    {
        cout<<"\n file not found:"<<fname;
        exit(0);
    }
    while (!f1.eof())
    {
        ch= f1.get();
        if(strchr("AEIOUaeiou", ch))
        ct++;
        cout<<ch;
    }
    cout<<"\n Total vowels ="<<ct<< endl;
    f1.close();
}