#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,l;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(s=1;s<=(5-i)*2+1;s++)
		{
			printf(" ");
		}
		for(l=i;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	for(i=5-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(s=1;s<=(5-i)*2+1;s++)
		{
			printf(" ");
		}
		for(l=i;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}


	getch();

}