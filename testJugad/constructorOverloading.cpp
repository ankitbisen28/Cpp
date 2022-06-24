#include <iostream>

using namespace std;

class volume 
{
    private:
        float vc, vcy, vrb;

    public:
        volume(float s)
        {
            vc = s * s * s;
            cout << "\n Volume of cube is : "<< vc;
        }
        volume(float r,float h)
        {
            vcy = 3.14 * r * h;
            cout << "\n Volume of cylander is : "<< vcy;
        }
        volume(float r,float b,float h)
        {
            vrb = b * r * h;
            cout << "\n Volume of Reactangluar Boxis : "<< vrb<< endl;
        }
};

int main()
{
    volume v1(10.3);
    volume v3(10.3, 12.34);
    volume v2(10.3, 20.3, 18.34);
    return 0;
}