#include<stdio.h>

int fac(int n)
{
	if(n>0)
	{
		return n*fac(n-1);
	}
	else
	{
		return 1;
	}
}
void main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	printf("factorial: %d",fac(n));
}
