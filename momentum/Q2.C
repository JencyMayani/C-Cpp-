#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter Any Number:\n");
	scanf("%d",&n);
	(n/2*2==n)
		? printf("This Number Is Even \n")
		: printf("This Number Is Odd \n");
	getch();
}