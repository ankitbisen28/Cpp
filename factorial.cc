#include <iostream>

using namespace std;
class Factorial 
{
    private:
        int n;
        long fact;
    
    public:
        void getvalue(); //declaration only
        void showfactorial();
};

void Factorial::getvalue()
{
    cout << "Enter any number?:";
    cin >> n;
}

void Factorial::showfactorial()
{
    fact = 1;
    while (n>=1)
    {
        fact = fact*n;
        n--;
    }
    cout << "\n fanctorial=" << fact;
    
}

int main ()
{
    Factorial obj;
    obj.getvalue();
    obj.showfactorial();
    return 0;
}
