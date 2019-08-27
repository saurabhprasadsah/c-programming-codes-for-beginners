#include<iostream>
#include<conio.h>
using namespace std;
class result
{
	private:
		long int roll;
		float marks;
		char grade;
	public:
		void getdata()
		{
			cout<<"\n Enter the roll number and marks of students =";
			cin>>roll>>marks;
			}	
		void calculate()
		{
			if(marks>80)
			grade='A';
			else if(marks>65)
			grade='B';
			else if(marks>45)
			grade='C';
			else if(marks>35)
			grade='D';
			else
			cout<<"\nFail";
			}	
		void showdata()
		{
			cout<<"\n Roll number is ="<<roll;
			cout<<"\n Marks is ="<<marks;
			cout<<"\n Grade is ="<<grade;
			}	
};
main()
{
	result s1,s2;
	s1.getdata();
	s2.getdata();
	s1.calculate();
	s2.calculate();
	s1.showdata();
	s2.showdata();
	getch();
}
