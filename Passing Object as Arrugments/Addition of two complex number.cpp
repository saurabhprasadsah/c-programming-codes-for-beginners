#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class complex
{
	private:
		float a,b;	
		public:
		void get()
		{
			cout<<"Enter the real and imaginary number =";
			cin>>a>>b;
		}
		void show()
		{
			cout<<"complex no. ="<<a<<"+"<<b<<"i"<<endl;
		}
		void cpx(complex A,complex B)
		{
			a=A.a+B.a;
			b=A.b+B.b;
		}
};
main()
{
	complex L,M,N;
	L.get();
	M.get();
	L.show();
	M.show();
	N.cpx(L,M);
	N.show();
	getch();
}
