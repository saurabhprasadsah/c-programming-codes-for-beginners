/*   SYNTAX OF CLASS;-
	----------------------------------
	class <class name>
   {
   		visiblity mode:			                           (visiblity mode = private: , public: , protected:)
   		member variable declaration;
   		visiblity mode:
   		member fuction definition;
	}<object decleration>;
	----------------------------------
	
	HOW TO ACCESS THE MEMBER OF CLASS
	---------------------------------
	<objectname>.memberfunction();
	
*/
#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	public:
		void show()
		{
			cout<<"\n Welcome to Rembo c++ tutorial";
		}
}obj;
main()
{
	obj.show();
	getch();
}
