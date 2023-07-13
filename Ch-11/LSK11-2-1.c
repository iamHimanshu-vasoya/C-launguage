#include<stdio.h>
void main(){
	int n,i;
	printf("enter the array's size : ");
	scanf("%d",&n);
	int a[n];
	int *p[n];
	printf("enter array element : \n");
	for(i=0;i<n;i++){
		p[i]=&a[i];
	}
	for(i=0;i<n;i++){
		printf("a[%d] : ",i);
		scanf("%d",p[i]);
	}
	for(i=0;i<n;i++){
		printf("a[%d] : %d\n",i,*p[n-i-1]);
	}
}
