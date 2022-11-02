#include<stdio.h>
main()
          // 5 subject mark.
{
	int sci,maths,eng,ss,guj;
	int sum;
	float percent;
	
	printf("enter your sci mark \n");
	scanf("%d",&sci);
	printf("enter your maths mark \n");
	scanf("%d",&maths);
	printf("enter your eng mark \n");
	scanf("%d",&eng);
	printf("enter your ss mark \n");
	scanf("%d",&ss);
	printf("enter your guj mark \n");
	scanf("%d",&guj);
	
	sum=sci+maths+eng+ss+guj;
	percent=sum*100/500;
	
	printf("your total marks is %d \n",sum);
	printf("your total percantage is %f \n",percent);
	
}