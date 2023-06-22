#include<stdio.h>

struct student
{
	int id;
	char name[10];
	int age;
	char course[10];
	char city[10];
	int standard;
	char scl[20];
};
int main()
{
    int n,i;
    printf("Enter number of student :");
    scanf("%d",&n);
    
	struct student s;
	
	for(i=0;i<n;i++)
	{
	
	    printf("Enter id\t\t:");
     	scanf("%d",&s.id);
     	
       	printf("Enter name\t\t:");
	    scanf("%s",&s.name);
	    
	    printf("Enter age\t\t:");
	    scanf("%d",&s.age);
	    
      	printf("Enter course\t\t:");
	    scanf("%&s",&s.course);
	    
	    printf("Enter city\t\t:");
	    scanf("%s",&s.city);
	    
     	printf("Enter standard\t:");
	    scanf("%d",&s.standard);
	    
	    printf("Enter school\t:");
	    scanf("%s",&s.scl);
    }
	
	printf("\n\n id\t\t name \t\t age\t\t course\t\t city\t\t standard\t\t scl\t\t\n ****** ****** ******* *******\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\t\t%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t\n",s.id,s.name,s.age,s.course,s.city,s.standard,s.scl);
	}
}

