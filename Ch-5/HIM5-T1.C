
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("enter value: ");
	scanf("%d",&a);
	printf("enter value: ");
	scanf("%d",&b);
	printf("enter value: ");
	scanf("%d",&c);


	if(a<b)
	{
		if(a<c)
		{
			printf("a is small");
		}
		else
		{
			printf("c is small");
		}
	}
	else
	{
	       if(b<c)
	       {
			printf("b is small");
	       }
	       else
	       {
			printf("c is small");
	       }
	}
	getch();
}
