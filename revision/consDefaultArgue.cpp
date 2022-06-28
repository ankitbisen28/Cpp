/* It is possible to define constructor with default aruguments for example the constructor complex() can be declared as follows 
complex(float r = 0, float i = 0);
{ };
The default value for the arguments and r is 0. then the statement:
complex c1(2.2); WILL SOTRE in argue and will be default 0*/

#include <iostream>

using namespace std;

class complex
{
    private:
        float real, imag;

    public:
        complex(float real = 0.0, float imag = 0.0)
        {
            this -> real = real;
            this -> imag = imag;
        }

        void Addcomplex(complex c1, complex c2)
        {
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }

        void display()
        {
            cout<<real<<"+j"<<imag<<endl;
        }
};


int main()
{
    complex c1(2.34, 34);
    complex c2(3.23);
    complex c3;
    c1.display();
    c2.display();
    c3.Addcomplex(c1, c2);
    c3.display();
    return 0;
}


