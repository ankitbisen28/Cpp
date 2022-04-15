#include <iostream>
#include <string.h>

using namespace std;

class Student
{
  private:
	int rno;
	char sname[30];

  public:
	static int count;
	Student(int r, char s[])
	{
		rno = r;
		strcpy(sname, s);
		count++;
	}

	void display(void)
	{
		cout << "Roll no if Student : " << rno << endl;
		cout << "Name if Student : " << sname << endl;
		cout << "============================" << endl
			 << endl;
	}
};

int Student::count = 0;

int main()
{
	Student s1(1001, "Himanshu");
	s1.display();

	Student s2(1002, "Ebad");
	s2.display();

	cout << "Total object(s) are " << Student::count << endl
		 << endl;

	return 0;
}
