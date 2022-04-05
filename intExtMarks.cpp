#include <iostream>

using namespace std;

class Externalmarks;

class Internalmarks 
{
    private:
        int i1,i2;
    
    public:
        void getinternalmarks()
        {
            cout << "Enter I1 and I2:";
            cin >> i1 >> i2;
        }
        void putinternalmarks()
        {
            cout << "\n Internal Marks Obtained:";
            cout << "\n Internal Mark 1:" << i1;
            cout << "\n Internal Mark 2:" << i2 << endl;
        }
        
        friend void totalmarks(Internalmarks , Externalmarks);
};


class Externalmarks 
{
    private:
        int e1,e2;
    
    public:
        void getexternalmarks()
        {
            cout << "Enter e1 and e2:";
            cin >> e1 >> e2;
        }
        void putexternalmarks()
        {
            cout << "\n External Marks Obtained:";
            cout << "\n External Mark 1:" << e1;
            cout << "\n External Mark 2:" << e2 << endl;
        }
        
        friend void totalmarks(Internalmarks , Externalmarks);
};

void totalmarks(Internalmarks obj1, Externalmarks obj2)
{
    int total;
    float avg;
    total = obj1.i1 + obj1.i2 + obj2.e1 + obj2.e2;
    avg = total/4.0;
    cout << "\n Total Marks:" << total;
    cout << "\n Average :" << avg;
}

int main()
{
    Internalmarks obj1;
    Externalmarks obj2;

    obj1.getinternalmarks();
    obj2.getexternalmarks();

    obj1.putinternalmarks();
    obj2.putexternalmarks();

    totalmarks(obj1, obj2);
    return 0;
}