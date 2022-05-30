#include <iostream>

using namespace std;

template <class T>
void getmax(T a, T b)
{
    T res;
    if(a>b)
    res=a;
    else
    res=b;
    cout<< "\n Max between " << a << " And "<< b << " = " << res<< endl;
}

int main()
{
    getmax(10,20);
    getmax('A', 'a');
    getmax(10.2,20.3);
    return 0;
}