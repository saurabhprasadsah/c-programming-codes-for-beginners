#include<iostream>
#include<conio.h>
using namespace std;
class customer
{
	private:
		long int acno;
		float bal;
		char name[30],add[30];
	public:
		void detail()
		{
			cout<<"\nEnter the Account Number =";
			cin>>acno;
				cin.sync();								//it is use for empty the input buffer 
			puts("Enter the Name and Address =");
			gets(name);
			gets(add);
			cout<<"\n Account Balance =";
			cin>>bal;
			}	
		void show()
		{
			cout<<"\nAccout Number =";
			cout<<"\nName ="<<name;
			cout<<"\nAddress ="<<add;
			cout<<"\n Accout Balance ="<<bal;
			if(bal<500)
			cout<<"\n your Balance is below then 500";
			}		
};
main()
{
	customer s[3];
	cout<<"\nEnter the Records of 3 customer\n";
	for(int i=0;i<3;i++)
	{
		s[i].detail();
	}	
	cout<<"\nThe Records of 3 customer\n";
	for(int i=0;i<3;i++)
	{
		s[i].show();
	}
	getch();	
}
