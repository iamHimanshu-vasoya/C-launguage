#include<stdio.h>

void main(){
	FILE *fp,*fp2;
	int a,i=50;


	fp=fopen("C:\\Users\\himanshu\\Desktop\\odd.txt","w");
	

	for(i=50;i<=70;i++){

		if(i%2 == 1){
			fprintf(fp,"odd num: %d\n",i);
		//	i++;
		}
	
	}

	fclose(fp);
	fp2=fopen("C:\\Users\\himanshu\\Desktop\\even.txt","w");
	for(i=50;i<=70;i++){
		if(i%2==0){
		fprintf(fp,"even num: %d\n",i);
		}
	}
	fclose(fp2);
}
