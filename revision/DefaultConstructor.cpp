#include <iostream>

using namespace std;

class Rectangle 
{
    private:
        float length, breath, area;

    public:
        Rectangle()
        {
            length =10.3;
            breath = 34.34;
        }
        
        void display()
        {
            area = length * breath;
            cout<< "Area is :"<<area<<endl;
        }
};

int main()
{
    Rectangle obj;
    obj.display();
    return 0;
}