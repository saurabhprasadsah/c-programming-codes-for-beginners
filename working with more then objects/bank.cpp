#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class cust
{
	long int acno;
	float bal;
	char add[30],name[30];
	public:
		void get_detail()
		{
			cout<<"\n Enter the Account No. =";
			cin>>acno;
			cout<<"\n Name and Address of customer =";
			cin>>name>>add;
			cout<<"\n Enter the balance =";
			cin>>bal;
		}
		void show()
		{
			cout<<"\n Account number ="<<acno;
			cout<<"\n Name of custome ="<<name;
			cout<<"\n Address of customer ="<<add;
			cout<<"\n Account Balance is ="<<bal;
			if(bal<1000)
			{
				cout<<"\n Your balance is below than 1000 Please increase your balance!";
			}
		}
};
main()
{
	cust c1,c2,c3;
	c1.get_detail();
	c2.get_detail();
	c3.get_detail();
	c1.show();
	c2.show();
	c3.show();
	getch();
}
