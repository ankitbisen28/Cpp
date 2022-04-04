#include <iostream>

using namespace std;

class Son;
class Father;

class Father
{
    private:
        long income;
    
    public:
        void getincome()
        {
            cout << "Enter Income:";
            cin >> income;
        }
        friend void familyincome (Father, Son);
};

class Son 
{
    private:
        long income1, income2 ,tot;
    
    public:
        void getincome()
        {
            cout << "Enter Income 1 and Income 2:";
            cin >> income1 >> income2;
        }
        friend void familyincome (Father , Son);
};

void familyincome (Father f, Son s)
{
    long tot;
    tot = f.income + s.income1 + s.income2;
    cout << "\n Total Income:"<< tot << endl;
}

int main()
{
    Father f;
    Son s;
    f.getincome();
    s.getincome();
    familyincome(f, s);
    return 0;
}