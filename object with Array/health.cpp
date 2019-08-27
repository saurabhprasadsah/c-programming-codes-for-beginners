#include<iostream>
#include<conio.h>
using namespace std;
class health
{
	private:
		float w,h;
	public:
		void data()
		{
			cout<<"\n Enter the Weight and height =";
			cin>>w>>h;
			}
		void show()
		{
			cout<<"\n Weight ="<<w;
			cout<<"n Height ="<<h;
				}		
};
main()
{
	health s[3];
	cout<<"\n Enter the 3 records of volenters :-\n";
	for(int i=0;i<3;i++)
	{
		s[i].data();
	}
	cout<<"\n The records of are :- \n";
	for(int i=0;i<3;i++)
	{
		s[i].show();
	}
	getch();
}
