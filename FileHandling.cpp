#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f1;
    char ch;
    f1.open("ankit.txt", ios::app);
    cout << "\n Type your content and presss # to end.. \n";
    cin.get(ch);
    while (ch!='#')
    {
        f1.put(ch);
        cin.get(ch);
    }
    f1.close();
    return 0;
};