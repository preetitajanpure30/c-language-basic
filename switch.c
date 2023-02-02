//program for switch case menudriven circle
#include<stdio.h>
main()
{
	int option,ans;
	float area,side,height,l,b,r,base;
	do
	{
		printf("\n 1.square");
		printf("\n 2.rectangle");		
		printf("\n 3.triangle ");
    	printf("\n 4.circle");
    	printf("\n\n Enter option");
    	scanf("d%",&option);
    	switch(option)
    	{
    		case 1:
    			printf("Enter side of square");
    			scanf("f%",&side);
    			area=side*side;
    			printf("area is of square %f",area);
    			break;
    		case 2:
    			printf("Enter l and b of rectangle");
    			scanf("f%f%",&l,&b);
    			area=l*b;
    			printf("area of rectangle is %f",area);
    			break;
    		case 3:
    			printf("Enter base and height of triangle");
    			scanf("f%f%",&base,&height);
    			area=0.5*base*height;
    			printf("area of triangle is %f",area);
    			break;
    		case 4:
    			printf("Enter radius of circle");
    			scanf("f%",&r);
    			area=3.14*r*r;
    			printf("area of circle is %f",area);
    			break;
    		default:
    			printf("invalid option");
		}
		printf("\n Do you want to continue? press 1");
		scanf("%d",&ans);
    }
    while(ans==1);
}
