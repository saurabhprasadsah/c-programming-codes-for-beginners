/*  	Syntax - Default constructor
		-----------------------------
		_________________________________________________________________________	
			
			class <class name>
			{
			<name of class>			// default constructor
			{
				any variable = fixed value like ( a = 5);
			}
		};
			main()
			{
				<class name>	<object name>;	 //defult construct called here
				<object name>.function();
				getch();
		}
		__________________________________________________________________________
		
		qns. What is Default constructor?
		ans. Default constructor are those constructor which does not requires any arguments 
				
*/

#include<iostream>
#include<conio.h>
using namespace std;
class con
{
	private:
		int x;
	public:
		con()						// Default constructor
		{
			x=5;
			}	
		void get()
		{
			cout<<"Enter the number =";
			cin>>x;
			}	
		void show()
		{
			cout<<"The value is ="<<x<<endl;
			}		
};
main()
{
	con obj;					// calling Default constructor by implicite method or simple method
	obj.show();
	con new_obj;					
	new_obj.get();
	new_obj.show();
	getch();
}
