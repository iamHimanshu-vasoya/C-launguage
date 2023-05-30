#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();

	printf("enter value: ");
	scanf("%d",&n);
		while(n>=i)
		{
			if(n%2== 1)
			{
				printf("%d ",n);
			}
			n--;
		}
	getch();
}