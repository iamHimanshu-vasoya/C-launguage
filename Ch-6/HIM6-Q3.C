#include<stdio.h>
#include<conio.h>

main()
{
	int n,sum=0,first,last;
	clrscr();

	printf("enter n: ");
	scanf("%d",&n);

	first=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	last=n;
	sum=first+last;
	printf("sum=%d",sum);
	getch();
}
