#include<stdio.h>
main()
      //display monday to sunday.
{
	int week;
	printf("enter 1 for monday to 7 for sunday");
	scanf("%d",&week);
	
	switch (week)
	{
		case 1:
		printf("monday\n");
		break;
		case 2:
		printf("tuesday\n");
		break;
		case 3:
		printf("wednesday\n");
		break;
		case 4:
		printf("thursday\n");
		break;
		case 5:
		printf("friday\n");
		break;
		case 6:
		printf("saturday\n");
		break;
		case 7:
		printf("sunday\n");
		break;
		
		printf("enter valid number\n");
			
	}
}