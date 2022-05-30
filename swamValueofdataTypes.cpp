#include <iostream>

using namespace std;

template <class T>
void Interchange(T a, T b)
{
    cout << "Before Swapping \n";
    cout << a << "\t" << b << endl;
    T c;
    c = a;
    a = b;
    b = c;
    cout << "after swapping\n ";
    cout << a << '\t' << b <<endl;
}

int main()
{
    Interchange(10,20);
    Interchange('m','n');
    return 0;
}