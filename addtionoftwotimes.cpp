#include <iostream>

using namespace std;

class Time 
{
    private:
        int hours, minutes, seconds;

    public:
        void gettime()
        {
            cout << "Enter Time (hh mm ss):";
            cin >> hours >> minutes >> seconds;
        }

        void addtime(Time t1, Time t2)
        {
            hours = t1.hours+ t2.hours;
            minutes= t1.minutes + t2.minutes;
            seconds= t1.seconds + t2.seconds;
            if(seconds>59)
            {
                seconds=seconds-60;
                minutes++;
            }
            if(minutes>59)
            {
                minutes=minutes-60;
                hours++;
            }
        }

        void showtime()
        {
            cout << hours << ":" << minutes << ":" << seconds;
        }
        
       
};

int main()
{
    Time t1, t2, t3;
    t1.gettime();
    t2.gettime();

    t3.addtime(t1, t2);
    t3.showtime();
    return 0;
}