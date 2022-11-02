#include<stdio.h>
main()
    // check num: possitive & nagative.
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	
	if (num>-1)
	{
		printf("number is possitive");
	}
	else
	{
		printf("number is nagative");
	}
}