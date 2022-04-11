#include <iostream>

using namespace std;

class Volume 
{
    private:
         float vc, vcy, vrb;

    public:
        Volume(float s)
        {
            vc = s * s * s;
            cout << "\n Volume of Cube is:" << vc;
        }

        Volume(float r, float h)
        {
            vcy = 3.14 * r * r * h;
            cout << "\n Volume of Cylinder:" << vcy;
        }

        Volume(float l, float b, float h)
        {
            vrb = l * b * h;
            cout << "\n Volume of Rectangular Box:" << vrb << endl;
        }
};

int main()
{
    Volume v1(10.00f);
    Volume v2(20.00f, 12.33f);
    Volume v3(16.30f, 23.32f, 21.43f);
    return 0;
}