/* Constructor can be used to allocate memory while creating object, this will enable  the system to the alocate the right 
amount og memory for each objects when the objects are not same size, thus resulting in the saving of memory. Allocation of memory to object at the time of their construction is known as dynamic construction of objectsl. the memory allocate with thelp of new operator and t he new operator require pointer dynamic allocation  */

#include <iostream>
#include <string.h>

using namespace std; 

class Student 
{
    private:
        char *sname;
        int rno;

    public:
         Student(int r, char *s)
        {
            int len = strlen(s);
            sname = new char [len + 1];
            rno = r;
            strcpy(sname, s);
        }

        void display()
        {
            cout<<"Roll Number :"<<rno<<endl;
            cout<< "Student Name: "<<sname<< endl;
        }
};

int main()
{
    Student s1(1001, "Ankit");
    s1.display();
    Student s2(1002, "Raam");
    s2.display();
    return 0;
}

