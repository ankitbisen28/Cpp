#include <iostream>
 
using namespace std;

class Beta;
class Gamma;

class Alpha 
{
    private:
        int n1;
    public:
        void getvalue()
        {
            cout << "Enter N1:";
            cin >> n1;
        }

    friend void greatest (Alpha , Beta , Gamma);
};

class Beta 
{
    private:
        int n2;
    
    public:
        void getvalue()
        {
            cout << "Enter N2:";
            cin >> n2;
        }
    friend void greatest (Alpha , Beta , Gamma);
};

class Gamma 
{
    private:
        int n3;
    
    public:
        void getvalue()
        {
            cout << "Enter N3:";
            cin >> n3;
        }
    friend void greatest (Alpha , Beta , Gamma);

};

void greatest(Alpha obj1, Beta obj2, Gamma obj3)
{
    int gr, a, b, c;
    a=obj1.n1;
    b=obj2.n2;
    c=obj3.n3;

    gr = (a>=b?(a>=c?a:c):b>=c?b:c);

    cout << "\n Greatest ="<< gr << endl;
}

int main ()
{
    Alpha obj1;
    Beta obj2;
    Gamma obj3;
    obj1.getvalue();
    obj2.getvalue();
    obj3.getvalue();
    greatest(obj1, obj2, obj3);
    return 0;
}