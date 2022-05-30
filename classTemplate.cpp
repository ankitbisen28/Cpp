#include <iostream>

using namespace std;

template <class T>
class Calculator 
{
    private:
        T num1, num2;
    public:
        Calculator(T n1, T n2)
        {
            num1 = n1;
            num2 = n2;
        }
        
        void Display()
        {
            cout << "Number: " << num1 << " and " << num2 << endl;
            cout << num1 << " +"  << num2 << " = " << add()<< endl;  
            cout << num1 << " - " << num2 << " = " << sub()<< endl;  
            cout << num1 << " * " << num2 << " = " << mul()<< endl;  
            cout << num1 << " / " << num2 << " = " << div()<< endl;  
        }

        T add() { return num1 + num2; }
        T sub() { return num1 - num2; }
        T mul() { return num1 * num2; }
        T div() { return num1 / num2; }
};

int main()
{
    Calculator <int> obj(10,5);
    obj.Display();

    return 0;
}