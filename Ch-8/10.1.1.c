#include<stdio.h>  

void input(int a[],int n){
	int i,n,a[n];
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Enter a[%d]: ",i);
	scanf("%d",&a[i]);
    }
}

void main(){
	
    
    input();
}
