#include<stdio.h>

void divisible(){
	int a;
	printf("enter: ");
	scanf("%d",&a);
	
	if(a%5==0 && a%3==0){
		printf("the given num is divisible by both 3 & 5");
	}
	else{
		printf("the given num is not divisible by both 3 & 5");
	}
}

void main(){
	divisible();
}
