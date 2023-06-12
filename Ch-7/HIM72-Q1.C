#include<stdio.h>
main()
{
	int i,j,s,sp=5;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=sp;s>=0;s--)
		{
			printf(" ");
		}
		sp--;
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}