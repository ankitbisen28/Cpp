#include <iostream>

using namespace std;

class Zero
{};

void what_sign (int num)
{
    if(num > 0){
        cout << "+ve number"<< endl;
    }
    else if (num < 0)
    cout << "-ve Number"<< endl;
    else
    throw Zero();
}

int main(){
    int num;
    cout << "Enter Any number:";
    cin >> num;
    try
    {
        what_sign(num);
    }
    catch(Zero)
    {
        cout<<"zero Exception";
    }
    return 0;
}