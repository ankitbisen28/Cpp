#include <iostream>

using namespace std;

class shape 
{
    public:
        virtual void inputvalues()=0;
        virtual void area()=0;
        virtual void peri()=0;
};

class square:public shape
{
    private:
        double side;
    
    public:
        void inputvalues()
        {
            cout << "\n Enter side:";
            cin >> side;
        }
        void area()
        {
            cout << "\n Area is:" << (side*side);
        }
        void peri()
        {
            cout << "\n Peri is:" << (4.0*side);
        }
};

class triangle: public shape
{
    private:
        double x,y,z;

    public:
        void inputvalues()
        {
            cout << "Enter sides:";
            cin >> x >> y >> z;
        }
        void area()
        {
            double s = (x+y+z)/2;
            cout << "\n Area is:"<< 
        }
};