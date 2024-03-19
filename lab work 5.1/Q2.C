#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is positive number",n);
	}
	else if(n<0)
	{
		printf("%d is negative number",n);
	}
	else
	{
		printf("%d is zero",n);
	}
	getch();
}