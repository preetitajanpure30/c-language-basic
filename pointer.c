#include<stdio.h>
//pointer
main()
{
	int a=10,*p;
	p=&a;
	printf("\n%d ",a);
	printf("\n%d ",&a);
	printf("\n%d ",p);
	printf("\n%d ",&p);
	printf("\n%d ",*p);
	
}

