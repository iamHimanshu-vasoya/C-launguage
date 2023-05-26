
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,min;
	clrscr();

	printf("enter value of a\nb\nc\n: ");
	scanf("%d %d %d",&a,&b,&c);
	min = (a<b)
		?(a<c)
			?a
			:c
		;(b<c)
			?b
			:c
	printf("Minimun value is %d",min);
	getch();
}
