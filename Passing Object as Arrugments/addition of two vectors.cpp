#include<iostream>
#include<conio.h>
using namespace std;
class vector
{
	private:
		int a,b,c;
	public:
		void get()
		{
			cout<<"enter the i,j and k vector =";
			cin>>a>>b>>c;
			}	
		void show()
		{
			cout<<"The vector is ="<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
			}	
		void calculate(vector x,vector y)
		{
			a=x.a+y.a;
			b=x.b+y.b;
			c=x.c+y.c;
			}	
};
main()
{
	vector A,B,C;
	A.get();
	B.get();
	A.show();
	B.show();
	C.calculate(A,B);
	C.show();
	getch();
}
