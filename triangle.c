//programe for do while triangle 
#include<stdio.h>
main()
{
	int ans;
	float area,b,h;
	do
	{
		printf("Enter b and h");
		scanf("%f%f",&b,&h);
		area=0.5*b*h;
		printf("area is %f",area);
		printf("\nDo you want to continue press 1?");
		scanf("\n%d",&ans);
	}
	while(ans=1);
}
