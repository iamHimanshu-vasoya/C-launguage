#include<stdio.h>
#include<string.h>

void main(){
	
	char str[20];
	int length=0;
	int *ptr;

	
	printf("enter name: ");
	scanf("%[^\n]",&str);
	
	length=strlen(str);
	ptr=&length;
	printf("%d\n",*ptr);
}
