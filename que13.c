#include<stdio.h>
main()
{
    int a,b,c;
	
	printf("enter A :");
	scanf("%d",&a);
	printf("enter B :");
	scanf("%d",&b);
	printf("enter C :");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n A is largest num.");
		}
		else
		{
			printf("\n C is largest num.");
		}
		
	}
	else
	{
		if(b>c)
		{
			printf("\n B is largest num.");
		}
		else
		{
			printf("\n C is largest num.");
		}
	}
	
	
}

