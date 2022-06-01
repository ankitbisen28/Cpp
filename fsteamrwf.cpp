#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f1;
    char fname[20], ch;
    cout << "Enter anyfile Name:";
    cin >> fname;
    f1.open(fname,ios::in);
    if(!f1)
    {
        cout<<"\n file not found:\n"<< fname;
        exit(0);
    }
    while(!f1.eof())
    {
        ch=f1.get();
        cout<<ch;
    }
    f1.close();
}