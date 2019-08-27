#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i;
	cout<<"\n Enter the number =";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"X"<<i<<"="<<n*i<<endl;
	}
	getch();
}
