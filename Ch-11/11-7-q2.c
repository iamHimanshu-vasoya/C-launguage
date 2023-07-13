#include<stdio.h>

void arrayinput(int*);
void main(){
	
	int r,c,n=3,a;
	int *p1,*p2;
	arrayinput(&a);
}

void arrayinput(int *a){
	int r,c;
	int a[r][c],i,j;
	for(i=0;i<r;i++){
		for(j=0;j<n;j++){
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",a[i][j]);
		}
	}
}
