/*	ANTHOR WAY TO DECLARE OBJECT INSIDE THE MAIN
    --------------------------------------------
	
	class <class name>
   {
   		visiblity mode:			                           (visiblity mode = private: , public: , protected:)
   		member variable declaration;
   		visiblity mode:
   		member fuction definition;
	};
	main()
	{
	  <class name> <object name>;
	  <object name>.member function;
	  getch();	
	}

*/
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		long int roll;
		float marks;
	public:
	void getdata()
	{
		cout<<"\n Enter the Roll number and marks of a student =";
		cin>>roll>>marks;
		}	
	void showdata()
	{
		cout<<"\n Roll number is ="<<roll;
		cout<<"\n Marks is ="<<marks;
		}	
};
main()
{
	student s1;
	s1.getdata();
	s1.showdata();
	getch();	
}
