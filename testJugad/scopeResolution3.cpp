#include <iostream>

using namespace std;

class Payslip 
{
    private:
        int ecode;
        char ename[20];
        float bs, hra, ta,gs;

    public:
        void getdata();
        void process();
        void putdata(); 
};

void Payslip::getdata()
{
    cout<< "Enter empoloye code and name :";
    cin>>ecode>>ename;
    cout<< "Enter employee basic salary :";
    cin>>bs;
}

void Payslip::process()
{
    if(bs>=25000)
    {
        hra = bs * 0.10;
        ta = bs * 0.12;
    }
    else{
        hra = bs * 0.08;
        ta = bs * 0.10;
    }
    gs = hra + ta + bs;
}

void Payslip::putdata()
{      
    cout<< "Employee Name :"<<ename;
    cout<< "\nEmployee Basic salary :"<<bs;
    cout<< "\nHouse rent :"<<hra;  
    cout<< "\nTravling all:"<<ta;  
    cout<< "\nGross Salary :"<<gs<< endl;
}

int main()
{
    Payslip obj;
    obj.getdata();
    obj.process();
    obj.putdata();
    return 0;
}