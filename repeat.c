//programe for addition repeat or not 
#include<stdio.h>
main()
{
	int ans;
	float a,b,c;
	do
	{
		printf("\nEnter 2 no");
		scanf("%f%f",&a,&b);
		c=a+b;
		printf("additionis %f",c);
		printf("\nDo you want to continue press 1?");
		scanf("\%d",&ans);
	}
	while(ans=1);
}
