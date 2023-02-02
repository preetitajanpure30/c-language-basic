#include <stdio.h>
main()
{
	int i=1,n,f=1;
	printf("enter a no.");
	scanf("%d",&n); //5
	while (i<=n)
	{
		f=f*i;
		i++;
	}
	printf("factorial is %d",f);
}
