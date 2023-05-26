
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();

	printf("enter value: ");
	scanf("%d",&a);
	printf("enter value: ");
	scanf("%d",&b);
	printf("enter value: ");
	scanf("%d",&c);
	printf("enter value: ");
	scanf("%d",&d);


	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("maximum value: a");
			}
			else
			{
				printf("maximum value: d");
			}
		}
		else
		{
			if(c>d)
			{
				printf("maximum value: c");
			}
			else
			{
				printf("maximum value: d");
			}
		}
	}
	else
	{
	       if(b>c)
	       {
			if(b>d)
			{
				printf("maximum value: b");
			}
			else
			{
				printf("maximum value: d");
			}
	       }
	       else
	       {
			if(c>d)
			{
				printf("maximum value: c");
			}
			else
			{
				printf("maximum value: d");
			}
	       }
	}
	getch();
}
