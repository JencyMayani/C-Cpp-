#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter Value Of First Number:");
	scanf("%d",&a);
	printf("Enter Value Of Second Number:");
	scanf("%d",&b);
	printf("Enter Value Of Third Number:");
	scanf("%d",&c);
	(a>b)
		? (a>c)
			? printf("%d is maximum",a)
			: printf("%d is maximum",c)
		:(b>c)
			?  printf("%d is maximum",b)
			:  printf("%d is maximum",c);
	getch();

}