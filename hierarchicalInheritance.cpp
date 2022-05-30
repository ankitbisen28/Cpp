#include <iostream>

using namespace std;

class Vehicle 
{
    private: 
        char vname[20];
        int wheelscount;
    
    public: 
        void getdata()
        {
            cout << "Enter name of Vehicle :";
            cin >> vname;
            cout << "Enter Wheelcount :";
            cin >> wheelscount;
        }
        void display()
        {
            cout << "\n Name of Vehicle :" << vname;
            cout << "\n Total Wheels are :" << wheelscount << endl;
        }
};

class Lightmotor : public Vehicle
{
    private:
        int speedlimit;
    
    public:
        void getdata()
        {
            Vehicle::getdata();
            cout << "Enter speed limit :";
            cin >> speedlimit;
        }
        void display()
        {
            Vehicle::display();
            cout << "\n speeed Limit :"<< speedlimit;
        }
};

class Heavymotor : public Vehicle
{
    private:
        int loadcap;
        char permit[20];

    public:
        void getdata()
        {
            Vehicle::getdata();
            cout << "Enter Loading Capacity :";
            cin >> loadcap;
            cout << "Enter Permit Type :";
            cin >> permit;
        }

        void display()
        {
            Vehicle::display();
            cout << "\n Loading capacity :" << loadcap;
            cout << "\n Permit Type :" << permit;
        }
};

class Gearmotor : public Lightmotor
{
    private:
        int gearcount;

    public:
        void getdata()
        {
            Lightmotor::getdata();
            cout << "Enter Gearcount :";
            cin >> gearcount;
        }  

        void display()
        {
            Lightmotor::display();
            cout << "\n NO of Gear :" << gearcount;
        }
};

class Nongearmotor : public Lightmotor
{
    public:
        void getdata()
        {
            Lightmotor::getdata();
        }
        void display()
        {
            Lightmotor::display();
        }
};

class Passenger : public Heavymotor
{
    private:
        int sitting, standing;

    public:
        void getdata()
        {
            Heavymotor::getdata();
            cout << "Enter Sitting capacity ? :";
            cin >> sitting;
            cout << "Enter Standing capacity ? :";
            cin >> standing;
        }

        void display()
        {
            Heavymotor::display();
            cout << "Total Sitting Capacity :" << sitting;
            cout << "Total Standing Capacity :" << standing;
        }

};

class Goods : public Heavymotor
{
    public:
        void getdata()
        {
            Heavymotor::getdata();
        }
        void display()
        {
            Heavymotor::display();
        }
};

int main()
{
    int choice;
    Gearmotor gm;
    Nongearmotor nm;
    Passenger p;
    Goods g;
    while (1)
    {
       cout << "\n1. Gear Motor";
       cout << "\n2. Non-Gear Motor";
       cout << "\n3. Passenger ";
       cout << "\n4. Goods";
       cout << "\n5. Exit";
       cout << "\n Enter Your choice :";
       cin >> choice;
       if(choice == 5)
           break;

           switch (choice)
           {
           case 1:
               gm.getdata();
               gm.display();
               break;
           case 2:
               gm.getdata();
               gm.display();
               break;
           case 3:
               gm.getdata();
               gm.display();
               break;
           case 4:
               gm.getdata();
               gm.display();
               break;
           
           }
           cout << "\n===================";
    }
    return 0;
}