#include <iostream>

using namespace std;

class Complex 
{
    private:
        int real ,imag;
    
    public:
        void getvalue()
        {
            cin >> real >> imag;
        }

        void addit(Complex c1, Complex c2)
        {
            real=c1.real+c2.real;
            imag=c1.imag+c2.imag;
        }

        void showvalue()
        {
            cout << real << "+j" << imag;
        }
};

int main()
{
    Complex c1 ,c2 ,c3;
    cout << "Enter real and Imag for c1 obj?:";
    c1.getvalue();
    cout << "Enter real and Imag for c2 obj?:";
    c2.getvalue();
    c3.addit(c1,c2);
    c3.showvalue();
    return 0;
}