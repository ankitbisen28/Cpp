#include <iostream>

using namespace std;

class Area 
{
    private:
        float at;
        double ar;

    public:
        Area(float h, float b)
        {
            at = 0.5 * b * h;
            cout << "\n Area of Triangle:" << at;
        }

        Area (double l, double b)
        {
            ar = l * b;
            cout << "\n Area of Rectangle:" << ar << endl;
        }
};

int main()
{
    Area obj2(20.00f,30.30f);
    Area obj1(10.00,20.30);
    return 0;
}