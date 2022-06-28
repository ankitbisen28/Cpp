/* Destructor is again a special member funtions just like constructor which is invoked automatically whenever an object is going to be destroyed. This means a distructor is the last function that is going to be called before an object is destroyed. */

#include <iostream>
#include <string.h>

using namespace std;

class Students 
{
    private:
        char *sname;
        int rno, len;

    public:
        Students(int r, char *s)
        {
            len = strlen(s);
            sname = new char [len + 1];
            rno = r;
            strcpy(sname, s);
        }

        ~Students () // This is destructor 
        {
            cout<< "\n Memory delocated successfull"<<endl;
            delete sname;
        }

        void display()
        {
            cout<<"Roll number: "<< rno << endl;
            cout<< "Student Name: "<< sname<< endl;
        }
};

int main()
{
    Students s1(1001, "Ankit");
    s1.display();
    Students s2(1002, "Raam");
    s2.display();
    s2.display();
    return 0;
}