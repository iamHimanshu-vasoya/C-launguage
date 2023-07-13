#include<stdio.h>
#include<string.h>

struct emp{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int experience;
	char companyname[20];	
};

void main(){
	
	
	
	struct emp s[3];
	int i;
	
	for(i=0;i<3;i++){
		
		//printf("Student: %d/%d\n",i,3);
		printf("id\t: ");
		scanf("%d",&s[i].id);
		printf("name\t: ");
		scanf("%s",&s[i].name);
		printf("age\t: ");
		scanf("%d",&s[i].age);
		printf("course\t: ");
		scanf("%s",&s[i].role);
		printf("city\t: ");
		scanf("%s",&s[i].city);
		printf("std\t: ");
		scanf("%d",&s[i].experience);
		printf("school\t: ");
		scanf("%s",&s[i].companyname);
		
	}
		printf("id\tname\tage\trole\tcity\texperience\tcompanyname\n========== =========== ========== ========== =============\n");
		
		for(i=0;i<3;i++){
			printf("%d\t %s\t %d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].experience,s[i].companyname);
			
		}
	
}
