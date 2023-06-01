#include<stdio.h>
#include<conio.h>

main()
{       int i,factorial=1,n;
	clrscr();

	printf("Enter Number: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		factorial*=i;
	}
	printf("%d",factorial);
	getch();

}