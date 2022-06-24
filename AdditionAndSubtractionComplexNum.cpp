#include <iostream>

using namespace std;

class Complex 
{
    private:
        float real, imag;

    public:
        void getvalue()
        {
            cout << "Enter REal ANd Imag:";
            cin >> real >> imag;
        }

        Complex operator+ (Complex x)
        {
            Complex res;
            res.real = real + x.real;
            res.imag = imag + x.imag;
            return (res);
        }

        Complex operator-(Complex x)
        {
            Complex res;
            res.real = real- x.real;
            res.imag = imag- x.imag;
            return (res);
        }
        
        void display()
        {
            cout << real << "+j" << imag << endl
            ;
        }
};

int main()
{
    Complex c1, c2, c3, c4;
    c1.getvalue();
    c2.getvalue();
    c3.getvalue();
    c4=c1 + c2 + c3;

    c4.display();
    return 0;
}