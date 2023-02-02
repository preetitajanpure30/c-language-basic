//program for static variable
#include<iostream>
using namespace std;
class sample
{
	public:
		static int a;
		void display()
		{
			a++;
			cout<<"\n"<<a;
		}
};
int sample::a=0;
main()
{
	sample s1,s2,s3;//4
	s1.display();
	s2.display();
	s3.display();
	
}
