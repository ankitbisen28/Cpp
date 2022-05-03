#include <iostream>

using namespace std;

class Test 
{
    private:
        int ri ;
        float rf;
        long rl;

    public:
        int maxvalue(int a, int b)
        {
            if(a>b)
            ri=a;
            else
            ri=b;
            return ri;
        }
        // long maxvalue(int a, int b)
        // {
        //     if(a>b)
        //     rl=a;
        //     else
        //     rl=b;
        //     return rl;
        // }
        float maxvalue(float a, float b)
        {
            if(a>b)
            rf=a;
            else
            rf=b;
            return rf;
        }
};

int main()
{
    Test obj;
    // cout << "\n Maxvalue between 2 longs:" << obj.maxvalue(10000, 20000);
    cout << "\n Maxvalue between 2 interger:" << obj.maxvalue(10, 50);
    cout << "\n Maxvalue between 2 floats:" << obj.maxvalue(20.00f, 20.00f) << endl;
    return 0;
}