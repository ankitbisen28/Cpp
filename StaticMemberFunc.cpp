#include <iostream>

using namespace std;

class Sample 
{
    private:
        int x, y;
        static int number;

    public:
        void setvalue(int x, int y)
        {
            this -> x = x;
            this -> y = y;
            number++;
        }

        static int objectcount()
        {
            return number;
        }

        void putvalue()
        {
            cout << "\n Value of X and Y :" << x << "\t" << y;
        }
};

int Sample::number = 0;

int main()
{
    Sample s1;
    s1.setvalue(10,20);
    s1.putvalue();
    cout << "\n Number of Object created:"<< Sample::objectcount()<< endl;
    return 0;
}