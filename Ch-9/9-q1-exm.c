#include<stdio.h>
#include<string.h>

main()
{
	char str1[20],rev[20];
	int i,comp;
	
	printf("Enter name: ");
	gets(str1);
	
	strcpy(rev,str1);
	
	strrev(str1);
	comp = strcmp(str1,rev);
	
	if(comp==0){
		printf("string is palindrome...");
		
	}
	else{
		printf("string is not palindrome...");
	}
}
