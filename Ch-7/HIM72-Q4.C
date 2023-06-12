#include<stdio.h>
main()
{
	int i,j,s,sp=0;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(s=0;s<=sp;s++)
		{
			printf(" ");
		}
		sp++;
		for(j=i;j>=1;j--)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	getch();
}