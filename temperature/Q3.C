#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,l,f;
	clrscr();
	printf("Enter Any Number:");
	scanf("%d",&n);
	l=n%10;
	for(i=1;i<=n;i++)
	{
		n=n/10;
	}
	f=n;
	printf("Sum Of First And Last Number:%d",f+l);
	getch();
}