#include <iostream>
using namespace std;

class Calculate 
{
    private:
        float r, area;

    public:
        float pi;
        
    void getvalues()
    {
        cout << "Enter Radius of circle?:";
        cin >>r;
    }

    void display()
    {
        area = pi*r*r;
        cout <<"\n Area of circle:" << area;
    }
};

int main()
{
    Calculate obj;
    obj.pi = 3.14;
    obj.getvalues();
    obj.display();
    return 0;
};