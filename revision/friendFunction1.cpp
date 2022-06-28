/* The basic object oriented concepts of data heandling and encaptulation are implemented by restricting non-memeberfunction
from accessing an objecgts private data .  the basic policy of oops is, if you are not a memeber function then you cannot 
get in and access object private data memeber sometime this inflexiblity can be inconvinient. 

the non-member function that is allowed access to the private data of a class is called as friend of the calss  friend 
functioni. */

#include <iostream>

using namespace std;

class son; // forward declaration 
class father;

class father
{
    private:
        long income;

    public:
        void getincome()
        {
            cout << "Enter income: ";
            cin>> income;
        }

        friend void familyincome(father, son);
};

class son 
{
    private:
        long income1, income2,tot;

    public:
        void getincome()
        {
            cout<<"Enter income1 and income2: ";
            cin>>income1>>income2;
        }

    friend void familyincome(father, son);
};

void familyincome(father f, son s)
{
    long tot;
    tot = f.income + s.income1 + s.income2;
    cout<< "\n Total Income: "<< tot<< endl;
}

int main()
{
    father f;
    son s;
    f.getincome();
    s.getincome();
    familyincome(f, s); // Passing object.
    return 0;
}