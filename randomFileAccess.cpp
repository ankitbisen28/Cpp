#include <iostream>
#include <fstream>

using namespace std;

class Students 
{
    private:
        int rno;
        char name[20];
        char gender;
    public:
        void getdata();
        void putdata();  
};

void Students :: getdata()
{
    cout<<"Enter Roll Number:";
    cin>>rno;
    cout<<"Enter Student Name:";
    cin>>name;
    cout<<"Enter Student Gender:";
    cin>>gender;
}

void Students :: putdata()
{
    cout<<"\n Roll number:"<<rno;
    cout<<"\n Student Name:"<<name;
    cout<<"\n Gender is:"<<gender;
}

int main()
{
    ofstream f1("mark.txt", ios::out | ios::binary);
    char proceed = 'y';
    int m, offset, recno;
    Students obj;
    while (proceed = 'y')
    {
        obj.getdata();
        f1.write((char *)&obj, sizeof(obj));
        cout<<"\n Want to Proceed:";
        cin>>proceed;
    }
    f1.close();
    ifstream f2("mark.txt", ios::in | ios::binary);
    cout<<"Enter Record Number to Process:";
    cin>>recno;
    m = sizeof(obj);
    offset = (recno-1)*m;
    f2.seekg(offset, ios::beg);
    f2.read((char *)&obj.m);
    obj.putdata(); 
    return 0; 
}