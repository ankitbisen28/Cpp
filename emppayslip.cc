#include <iostream>

using namespace std;

class Payslip
{
    private:
        int ecode;
        char ename[20];
        float bs, hra, ta, gs;

    public:
        void getempinfo();
        void process();
        void putempinfo();
    
};

void Payslip::getempinfo()
{
    cout<< "Employe code & Name:";
    cin >> ecode >> ename;
    cout << "Employee Basic Salary:";
    cin >> bs;
}

void Payslip::process()
{
    if(bs>=25000){
        hra = bs*0.10;
        ta= bs*0.012;
    }
    else {
        hra= bs*0.08;
        ta= bs*0.10;
    }

    gs= bs+hra+ta;
}

void Payslip::putempinfo()
{
    cout<< "Employe Name:"<< ename << endl;
    cout<< "Basic Salary:" << bs << endl;
    cout<< "House Rent All:" << hra << endl;
    cout<< "Travelling All:" << ta << endl;
    cout<< "Gross Salary is:" << ta << endl;
    cin >> bs;
}

int main()
{
    Payslip e;
    e.getempinfo();
    e.process();
    e.putempinfo();
    return 0;
}

