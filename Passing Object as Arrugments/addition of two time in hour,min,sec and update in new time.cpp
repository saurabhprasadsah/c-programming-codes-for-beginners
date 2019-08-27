/*
		qns. Add two time obejects in Hour,Mintue and second and update in new time object.
		ex-
			(for first time object)
					
								if we entered ->		hour = 3, minute = 50 ,second =60
			
			(for second time object)
					
								if we entered ->		hour = 4, minute = 40 ,second =70
			
			now add this two times object we want this result:-
			--------------------------------------------------
			
				 hour  min	sec		
					3 : 50 : 60
				+	4 : 40 : 70
				___________________
					7 :	32 : 10		<-- Like this which is a new time
				___________________		
*/

#include<iostream>
#include<conio.h>
using namespace std;
class timex
{
	private:
		int h,m,s;
	public:
		void get()
		{
			cout<<"\n Enter the time in hour ,minute and second =";
			cin>>h>>m>>s;
			}	
		void show()
		{
			cout<<"The Time is ="<<h<<":"<<m<<":"<<s<<endl;
			}	
		void calculate(timex t1,timex t2)
		{
			s=t1.s+t2.s;
			m=t1.m+t2.m+(s/60);
			s=s%60;
			h=t1.h+t2.h+(m/60);
			m=m%60;
					}	
};
main()
{
	timex c1,c2,c3;
	c1.get();
	c2.get();
	c1.show();
	c2.show();
	c3.calculate(c1,c2);
	c3.show();
	getch();
}
