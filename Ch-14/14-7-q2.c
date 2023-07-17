#include<stdio.h>
#include<string.h>

struct marksheet{
	int Rollno;
	char Name[20];
	int Chem;
	int Math;
	int Phy;
};

void main(){
	int n,i;
	printf("enter n: ");
	scanf("%d",&n);
	
	struct marksheet s[20];
	for(i=0;i<n;i++){
		printf("Enter detail of student %d/%d\n",i+1,n);
		
		printf("Roll no\t\t: ");
		scanf("%d",&s[i].Rollno);
		printf("Name\t\t: ");
		scanf("%s",&s[i].Name);
		printf("Chemistry\t: ");
		scanf("%d",&s[i].Chem);
		printf("Mathemetics\t: ");
		scanf("%d",&s[i].Math);
		printf("Physics\t\t: ");
		scanf("%d",&s[i].Phy);
		
	} 
	
	printf("Rollno\t\tName\t\tChemistry\tMathemetics\tPhysics\t\n",s[i].Rollno,s[i].Name,s[i].Chem,s[i].Math,s[i].Phy);
	
	for(i=0;i<n;i++){
		printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\t\n",s[i].Rollno,s[i].Name,s[i].Chem,s[i].Math,s[i].Phy);
	}
}

