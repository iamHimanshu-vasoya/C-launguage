#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,ans;
	clrscr();
	printf("enter x: ");
	scanf("%d",&x);

	printf("enter y: ");
	scanf("%d",&y);

	ans = (x+y)*(x+y)*(x+y);

	printf("ans : %d",ans);

	getch();



}