#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=5-i;s++)
		{
			printf("  ");
		}
		for(j=5-i+1;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();

}