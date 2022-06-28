#include <iostream>

using namespace std;
class factorial
{
    private:
        int n;
        long fact;

    public:
        void getvalue(); // declaration only 
        void showfactorial();
};

void factorial::getvalue()
{
    cout << "Enter any number :";
    cin>>n;
}

void factorial::showfactorial()
{
    fact = 1;
    while(n>=1){
        fact = fact * n;
        n--;
    }
    cout << "\n Factorial :"<< fact;
}

int main()
{
    factorial obj;
    obj.getvalue();
    obj.showfactorial();
    return 0;
}

