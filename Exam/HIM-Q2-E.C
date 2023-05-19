#include<stdio.h>
#include<conio.h>
main()
{
	int b,o;
	float h=0.1,d=0.05,t=0.08;
	clrscr();

	printf("enterany value: ");
	scanf("%d",&b);

	h=b*0.1;
	d=b*0.05;
	t=b*0.08;
	o=b+h+d+t;

	printf("%d\n,%.2f\n,%.2f\n,%.2f\n",b,h,d,t,o);
	getch();


}