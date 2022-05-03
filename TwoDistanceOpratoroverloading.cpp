#include <iostream>

using namespace std;

class Distance 
{
    private: 
    int feets, inches;

    public:
        void getdistance()
        {
            cin >> feets >> inches;
        }

        void operator+= (Distance x);
        void display()
        {
            cout << "Total Distance" << feets << "Feets and" << inches << "Iches";
        }
};

void Distance::operator+= (Distance x)
{
    feets += x.feets;
    inches += x.inches;
    while (inches>11)
    {       
        feets++;
        inches -= 12;
    }
    
}

int main()
{
    Distance D1, D2;
    D1.getdistance();
    D2.getdistance();
    D1+= D2;
    D1.display();
    return 0;
}