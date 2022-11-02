#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5,sum;
	float per;
	printf("\n enter mark1");
	scanf("%d",&m1);
	printf("\n enter mark2");
	scanf("%d",&m2);
	printf("\n enter mark3");
	scanf("%d",&m3);
	printf("\n enter mark4");
	scanf("%d",&m4);
	printf("\n enter mark5");
	scanf("%d",&m5);
	
	sum=m1+m2+m3+m4+m5;
	printf("\ntotal marks obtained : %d");
	
	per =sum/5;
	printf("\npercentage : %f",per);
	
	if (per>75)
	{
		printf("\ndistriction");	
	}
	else if (per>60)
	{
		printf("\nfirst class");
	}
	else if (per>50)
	{
		printf("\nsecond class");
	}
	else if (per>35)
	{
		printf("\npass class");
	}
	else
	{
		printf("\nfail");
	}
		
}