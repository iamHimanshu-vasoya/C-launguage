#include<stdio.h>
main()
{
	
	int r,c;
	
	printf("enter r: ");
	scanf("%d",&r);
	
	printf("enter c: ");
	scanf("%d",&c);
	
	int i,a[r][c],j,rsum=0,csum=0;
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
		
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter r: ");
    scanf("%d",&r);
    
    printf("element of r: %d",a[i][j]);
    for(i=0;i<r;i++){
    for (j = 0; j < c; j++) {
        printf("%d ", a[r][j]);
        rsum += a[r][j];
       }
    }
    printf("\nThe sum of row %d: %d\n", r, rsum);
    
     printf("Enter c: ");
    scanf("%d",&c);
    
    printf("element of c: %d",a[r][c]);
    for (i = 0; i < c; i++) {
        printf("%d ", a[i][c]);
        csum += a[i][c];
    }
    printf("\nThe sum of column %d: %d\n", c, csum);

}
