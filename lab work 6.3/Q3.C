#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();
	printf("Enter Any Number:");
	scanf("%d",n);
	for(i=1;i<=n;i++)
	{
		printf("%d*%d=%d",n,i,n*i);
	}

	getch();
}