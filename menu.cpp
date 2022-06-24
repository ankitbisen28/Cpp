#include<iostream>
#include<graphics>
#include<fstream>

using namespace std;
class telephone
{
	private:
		char name[20];
		char contact[11];
		char city[20];
	public:
		void getdetails();
		void showdetails();


};

void telephone::getdetails()
{
	cout<<"Person Name  : ";
	cin>>name;
	cout<<"Contact No.  : ";
	cin>>contact;
	cout<<"City         : ";
	cin>>city;
}

void telephone::showdetails()
{
	cout<<"\nPerson Name : "<<name;
	cout<<"\nContact No. : "<<contact;
	cout<<"\nCity        : "<<city<<endl;

}
void main()
{
	int gd=DETECT,gm,choice;
	telephone dir;
	 fstream f;

	while(1)
	{
		initgraph(&gd,&gm,"c://turboc3//bgi");

		setfillstyle(1,YELLOW);
		bar(100,100,400,400);
		settextstyle(3,0,4);
		setcolor(BLUE);
		outtextxy(110,110,"1. Add Contact");
		outtextxy(110,150,"2. Show Contact");
		outtextxy(110,190,"3. Delete Contact");
		outtextxy(110,230,"4. Modify Contact");
		outtextxy(110,270,"5. Exit App");
		outtextxy(110,310,"Enter Choice : ");
		gotoxy(551,550);
		cin>>choice;
		if(choice==5)
		  break;

		switch(choice)
		{
			case 1:
			    clearviewport();
			    dir.getdetails();
			    f.open("records",ios::in|ios::out|ios::app|ios::binary|ios::ate);
			    f.write((char *)&dir,sizeof(dir));
			    cout<<"\nRecord Saved Successfully...";
			    f.close();
			    break;
			case 2:
			    clearviewport();
			    f.open("records",ios::in|ios::binary);
			    while(f.read((char *)&dir,sizeof(dir)))
			    {
			       dir.showdetails();
			    }
			    f.close();
			    break;


		}
	}

}