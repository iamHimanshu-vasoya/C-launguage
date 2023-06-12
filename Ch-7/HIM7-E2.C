#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a=11;
	clrscr();
	for(i=11;i<=15;i++)
	{
		for(j=11;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	getch();

}