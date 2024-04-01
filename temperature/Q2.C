#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,l;
	clrscr();
	printf("Enter Any Number:");
	scanf("%d",&n);
	l=n%10;
	for(i=0;n!=0;i++)
	{
		n/=10;
	}
	printf("Total Number Of Digit:%d",i);
	getch();


}