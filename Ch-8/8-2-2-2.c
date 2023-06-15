#include<stdio.h>
main()
{
	int n1,n2;
	printf("Enter first year: ");
	scanf("%d",&n1);
	printf("Enter second year: ");
	scanf("%d",&n2);

	int i;
	for(i=n1;i<=n2;i++)
	{
		if(n1 % 4 == 0)
		{
			
			printf("%d ",n1);
		}
		n1++;
	}

}
