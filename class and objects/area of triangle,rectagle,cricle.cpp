#include<iostream>
#include<conio.h>
using namespace std;
class area
{
	private:
		float l,b,ba,h,r;
	public:
		void get_circle()
		{
			cout<<"\n enter the radius =";
			cin>>r;
			cout<<"\n area of circle is ="<<3.14*r*r;
			}	
		void get_rect()
		{
			cout<<"\n enter the length and breath =";
			cin>>l>>b;
			cout<<"\n area of rectangle is ="<<l*b;
			}	
		void get_triangle()
		{
			cout<<"\n enter the base and height =";
			cin>>ba>>h;
			cout<<"\n area of triangle is ="<<0.5*ba*h;
			}		
};
main()
{
	area ben;
	ben.get_circle();
	ben.get_rect();
	ben.get_triangle();
	getch();
}
