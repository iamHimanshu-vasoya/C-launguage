#include<stdio.h>
int arrayinput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}

int arraysum(int a[],int n)
{
	if(n==0)
	{
		return a[0];
	}
	else
	{
		a[n]+arraysum(a,n-1);
	}
}

//5 4

void main()
{
	int n,total,a;
	int arrayinput();
	
	total =arraysum(int a[],n-1);
	printf("array: ");
	scanf("a[%d]",a[n]);
	
	printf("%d",total);
}
