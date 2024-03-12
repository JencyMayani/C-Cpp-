#include<stdio.h>
#include<conio.h>


main()
{

	int a , b;
	float c = 0.5;
	clrscr();
	printf("Enter Lenght:");
	scanf("%d",&a);
	printf("Enter Width:");
	scanf("%d",&b);
	printf("Area Of Triangle =%.1f",a*b/c);
	getch();
}