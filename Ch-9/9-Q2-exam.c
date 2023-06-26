#include<stdio.h>
#include<string.h>

main()
{
	char str[20];
	int i,j,count=0,n;
	
	printf("Enter name: ");
	gets(str);
	
	for(j=0;str[j];j++){
		n=j;
		printf("Freq of Character: %d\n");
		
	}
	for(j=0;str[j];j++){
		count=1;
		if(str[i]){
			for(j=i+1;j<n;j++){
				if(str[i]==str[j]){
					count++;
				}
			}
		}
	}
}
