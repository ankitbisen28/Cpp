#include <iostream>

using namespace std;

class Rectangle 
{
    private:
        float length, breath, area;

    public: 
        Rectangle(float l, float b)
        {
            length = l;
            breath = b;
        }

        void display()
        {
            area = length * breath;
            cout << "Area is :" << area << endl;
        }
};

int main()
{
    Rectangle obj(12.34, 10.23);
    obj.display();
    return 0;
}