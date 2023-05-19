#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,ans;
	clrscr();

	printf("enter a: ");
	scanf("%d",&a);

	printf("enter b: ");
	scanf("%d",&b);

	ans=(a*a)+(b*b)+2*a*b;
	printf("(a+b)^2=%d",ans);
	getch();
}