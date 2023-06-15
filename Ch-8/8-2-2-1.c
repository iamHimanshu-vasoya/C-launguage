#include<stdio.h>

main()
{
	int n1,n2;
	printf("Enter number 1: ");
	scanf("%d",&n1);



	int a[n1],i,b[n2],c[i];

	for(i=0;i<n1;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter number 2: ");
	scanf("%d",&n2);
	
	for(i=0;i<n2;i++)	
	{
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1+n2;i++)
	{

	if(i<n1)
	{
		c[i]=a[i];
	}

	else
	{
		c[i]=b[i-n1];		
   }
 	
   
		printf("%d",c[i]);
	}	
}
