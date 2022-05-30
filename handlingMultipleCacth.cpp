#include <iostream>

using namespace std;

class Zero {};
class Positive{};
class Negative{};

void What_sign(int num)
{
    if(num > 0)
    throw Positive();
    else if(num < 0)
    throw Negative();
    else
    throw Zero();
}

int main()
{
    int num;
    cout << "Enter any number:";
    cin >> num;
    try
    {
        What_sign(num);
    }
    catch(Positive)
    {
        cout<<"Postive Number"<<endl;
    }
    catch(Negative)
    {
        cout<< "Negative Number"<<endl;
    }
    catch(Zero)
    {
        cout << "Zero Number"<<endl;
    }
    return 0;
}