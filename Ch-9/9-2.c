#include<stdio.h>
main(){
	
	char str1[20];
	int i;
	
	printf("enter string: ");
	scanf("%[^\n]",str1);
	
	for(i=0;i<20;i++){
		if(str1[i]>=97 && str1[i<90]){
			str1[i]-=32;
		}
	}
	printf("name: %s",str1);
}
