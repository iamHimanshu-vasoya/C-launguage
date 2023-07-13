#include<stdio.h>
void main(){
	int n,square;
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i;
	int *ptr;
	
	ptr=&a;
	
	for(i=0;i<n;i++){
		printf("enter a[%d]: ",i);
		scanf("%d",ptr + i);
	}
	// square = a[i]*a[i];
	
	for(i=0;i<n;i++){
		printf("square : %d\n",*(ptr+i)**(ptr+i));
	
	//	square = a[i]*a[i];
	}
	
	
}
