#include <iostream>

using namespace std;

class Rectangle 
{
    private:
        float length, breadth , area;

    public:
        
        Rectangle(float l, float b)
        {
            length=l;
            breadth=b;
        }

        void display()
        {
            area = length * breadth;
            cout << "\n Area of Ractangle is:" << area << endl;
        }
};

int main()
{
    Rectangle box1(30.0,20.0);
    Rectangle box2(20.0,15.0);
    box1.display();
    box2.display();
    return 0;
}