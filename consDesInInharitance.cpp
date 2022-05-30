#include <iostream>

using namespace std;

class Base 
{
    public:
        Base()
        {
            cout << "\n I'm Constructor From Base Class";
        }

        ~Base()
        {
            cout << "\n I am Destructor from Base Class" << endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout << "\n I'm Constructor from Derived Class";
        }
        ~Derived()
        {
            cout << "\n I'm Destructor From Derived Class";
        }
};

int main()
{
    Derived obj;
    return 0;
}