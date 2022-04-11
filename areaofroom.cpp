#include <iostream>

using namespace std;

class Rectangle 
{
    private:
        float length, breadth , area;

    public:
        
        Rectangle()
        {
            length=10.0;
            breadth=20.0;
        }

        void display()
        {
            area = length * breadth;
            cout << "\n Area is:" << area << endl;
        }
};

int main()
{
    Rectangle box1 , box2;
    box1.display();
    box2.display();
}