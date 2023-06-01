#include<stdio.h>
#include<conio.h>

main()
{       int i,sum=0,n;
	clrscr();

	printf("Enter Number: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	getch();

}