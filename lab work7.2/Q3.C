#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(s=4;s<=i-1;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();

