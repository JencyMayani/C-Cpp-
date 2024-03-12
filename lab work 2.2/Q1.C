#include<stdio.h>
#include<conio.h>


main()
{

	int a;
	float pi;
	clrscr();
	printf("Enter Value Of Radius:");
	scanf("%d",&a);
	printf("Enter Value Of Pie:");
	scanf("%f",&pi);
	printf("Radius Of Circle = %.2f",pi *a*a);
	getch();
}
