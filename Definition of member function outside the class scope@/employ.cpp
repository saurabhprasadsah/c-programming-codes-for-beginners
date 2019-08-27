/*	SYNTAX :-  DEFINTION OF MEMBER FUNTION OUTSIDE THE CLASS SCOPE
	--------------------------------------------------------------
	_______________________________________________________________
	class <class name>
	{
		visiblity mode:
		member variable declaration;
		visiblity mode:
		member funtion();
	}
	<return type>	<class name>::<member function>
	{
		statement	
	}
	______________________________________________________________
*/

#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
	private:
		int empid;
		char empname[30];
		long int sal;
	public:
		void detail();
		void show();	
}obj;
	void emp::detail()
	{
		cout<<"\nEnter the employ id =";
		cin>>empid;
		cin.sync();
		puts("Enter the Employ Name =");
		gets(empname);
		cout<<"\nEnter the salary =";
		cin>>sal;
	}
	void emp::show()
	{
		cout<<"\nThe Employ Id is ="<<empid;
		cout<<"\nName of Employ is ="<<empname;
		cout<<"\nSalary is ="<<sal;
	}
main()
{
	obj.detail();
	obj.show();
	getch();
}
