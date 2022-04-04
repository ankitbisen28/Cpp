#include <iostream>

using namespace std;

class Distance
{
    private:
        int feets, inches;

    public:
        void getdistance()
        {
            cout << "Enter Distance (feets and inches)?:";
            cin >> feets >> inches;
        }

        void addit(Distance d1, Distance d2);

        void showdistance()
        {
            cout << "\n Total Distance is:" << feets << "feets and" << inches << " inches";
        }

};

        void Distance::addit(Distance d1, Distance d2)
                {
                    feets=d1.feets + d2.feets;
                    inches=d1.inches + d2.inches;
                    while (inches>11)
                    {
                        inches= inches-12;
                        feets++;
                    }
                    
                }

int main()
{
    Distance d1 ,d2 ,d3;
    d1.getdistance();
    d2.getdistance();
    d3.addit(d1,d2);
    d3.showdistance();
    return 0;
}