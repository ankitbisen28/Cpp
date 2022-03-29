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

void main()
{
    Calculate obj;
    obj.getvalues();
    obj.display();
};