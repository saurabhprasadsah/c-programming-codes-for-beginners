/*
	Qns. Write a c++ program of calculate area of circle using default constuctor.
*/

#include<iostream>
#include<conio.h>
using namespace std;
class area
{
	private:
		float r,a;
	public:
		area()    // default constructor
		{
			r=5;
			a=0;
			}
		void get()
		{
			cout<<"\nEnter the radius =";
			cin>>r;
		}		
		void show()
		{
			a=3.14*r*r;
			cout<<"\nArea is="<<a;
		}
};
main()
{
	area cir=area(); 		//Default contructor calling by explicite method 
	cir.show();
	area newcir=area();
	newcir.get();
	newcir.show();
	getch();
}
