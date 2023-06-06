#include<stdio.h>
#include<conio.h>
main()
{
	char i='A',j='E';
	clrscr();
	for(i='A';i<='E';i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}

