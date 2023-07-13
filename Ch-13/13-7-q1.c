#include<stdio.h>

void main(){
	FILE *fp,*fp2;
	int a;
	fp=fopen("C:\\Users\\r31\\Desktop\\Himanshu.txt","r");
	fscanf(fp,"%d",&a);
	
	printf("data from file: %d",a);
	
	
	fclose(fp);
	fp2=fopen("C:\\Users\\r31\\Desktop\\Himanshu2.txt","w");
	fprintf(fp2,"%d",a);
	
	fclose(fp2);
}
