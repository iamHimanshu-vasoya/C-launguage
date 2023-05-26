#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	clrscr();

	printf("enter....\n ");
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for Gujrati\n");
	printf("emter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("press 1 for internet recharge");
			break;
		case 2:
			printf("press 2 for top-up recharge");
			break;
		case 3:
			printf("press 3 for special recharge");
			break;
		default:
			printf("wrong insert !!");
			break;
	}

	printf("Your recharge has been Sucessfuly");
	getch();
}
