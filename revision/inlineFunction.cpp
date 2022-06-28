#include <iostream>

using namespace std;

class calculate 
{
    private:
        int res;

    public:
        inline int getcubes(int n);
};

inline int calculate::getcubes(int n)
{
    res = n * n * n;
    return res;
};

int main()
{
    calculate obj;
    for(int i=0; i<=10; i++)
    {
        cout<<"\n cube of "<< i << " = " << obj.getcubes(i)<<endl;
    }
    return 0;
}