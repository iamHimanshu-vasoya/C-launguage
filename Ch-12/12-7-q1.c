#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];	
};

void main(){
	
	
	
	struct student s[3];
	int i;
	
	for(i=0;i<3;i++){
		
		printf("Student: %d/%d\n",i+1,3);
		printf("id\t: ");
		scanf("%d",&s[i].id);
		printf("name\t: ");
		scanf("%s",&s[i].name);
		printf("age\t: ");
		scanf("%d",&s[i].age);
		printf("course\t: ");
		scanf("%s",&s[i].course);
		printf("city\t: ");
		scanf("%s",&s[i].city);
		printf("std\t: ");
		scanf("%d",&s[i].std);
		printf("school\t: ");
		scanf("%s",&s[i].school);
		
	}
		printf("id\tname\tage\tcorse\tcity\tstd\tschool\n======================================================\n");
		
		for(i=0;i<3;i++){
			printf("%d\t %s\t %d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);
		}
	
}
