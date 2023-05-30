#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();

	printf("enter value: ");
	scanf("%d",&i);
	printf("enter value: ");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
		i++;
	}

	getch();
}