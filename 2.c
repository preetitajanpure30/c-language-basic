#include<stdio.h>
main()
{
	int i,j,n=65;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch++);
		}
		printf("\n");
	}
	
}
