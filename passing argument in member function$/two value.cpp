/*	SYNTAX - PASSING ARGUMENT IN MEMBER FUNCTION
	--------------------------------------------
	__________________________________________________
	Class <class name>
	{
		invisible mode:
		data member decleration;
		invisible mode:
		member function defintion( with arguments)
	};
	main()
	{
		<class name>  <object name decleration>;
		<object name>.member function( Aruments ); 
	}
	___________________________________________________

*/
#include<iostream>
#include<conio.h>
using namespace std;
class simple
{
	private:
		int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
			
		}
		void showdata()
		{
			cout<<"\nValue of a ="<<a;
			cout<<"\nValue of b ="<<b;
			}	
};
main()
{
	simple value;
	value.getdata(10,20);
	value.showdata();
	getch();
}
