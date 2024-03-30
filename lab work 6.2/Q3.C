#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter Ending Point:");
	scanf("%d",&n);
	i = 1;
	do
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}while(i<=n);
	getch();





}