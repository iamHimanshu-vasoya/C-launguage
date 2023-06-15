#include<stdio.h>

main()
{
	int r,c;
	printf("Enter row: ");
	scanf("%d",&r);
	printf("Enter Column: ");
	scanf("%d",&c);
	
	int i,j,a[r][c],b[r][c],d[r][c],sum=0;
	
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
			
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
			
			printf("Enter b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
			d[i][j]=a[i][j]+b[i][j];
			printf("d[i][j]: %d\n",d[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",d[i][j]);
		}
			printf("\n");
	}

	
}
