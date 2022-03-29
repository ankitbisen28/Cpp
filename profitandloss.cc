#include <iostream>
#include <cmath>

using namespace std;

class Shopkeeper
{
    private:
        int cp, sp, amt;

    public:
        void getinfo()
        {
            cout << "Enter cost and Sell price:";
            cin >> cp >> sp;
        }

        void display()
        {
            amt = sp - cp;
            if(amt>0){
            cout << "\n Shopkeeper made profit by RS:" << amt;

            }

            else if (amt<0){
            cout <<"\n Shopkeeper incurred loss by RS:"<< abs(amt);

            }

            else{
            cout << "\n No Profit / No Loss";
            } 
        }
};

int main()
{
    Shopkeeper obj;
    obj.getinfo();
    obj.display();
    return 0;
}