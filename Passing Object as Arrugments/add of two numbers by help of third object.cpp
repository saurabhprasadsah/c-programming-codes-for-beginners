#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	private:
		int x;
	public:
		void get(int b)
		{
			x=b;
			}	
		void show()
		{
			cout<<"\nThe Value of X is ="<<x;
			}	
		void sum(sample s1,sample s2)
		{
			x=s1.x+s2.x;
		}
};
main()
{
	sample A,B,C;
	A.get(10);
	B.get(20);
	A.show();
	B.show();
	C.sum(A,B);
	C.show();
	getch();
}
