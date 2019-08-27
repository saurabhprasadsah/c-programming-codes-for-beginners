#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class customer
{
	private:
		char cname[30];
		long int acno;
		float bal;
	public:
		void get(char n[],long int a,float x)
		{
			strcpy(cname,n);
			acno=a;
			bal=x;
		}
		void show(); 
};
void customer::show()
{
	cout<<"\n Customer name ="<<cname;
	cout<<"\n Account number ="<<acno;
	cout<<"\n Balance ="<<bal;
}
main()
{
	customer s1;
	s1.get("Gaurav",186927110,10000);
	s1.show();
	getch();
}

