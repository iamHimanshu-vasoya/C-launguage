#include<stdio.h>

void main(){
	FILE *fp;
	int a,i;
	

	fp=fopen("C:\\Users\\r31\\Desktop\\Hi2.txt","w");
	
	for(i=1;i<=50;i++){
		
		if(i%3==0 && i%5==0){
			fprintf(fp,"%d\n",i);
		}
	}
	
	fclose(fp);
}
