#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,m;
	clrscr();
	printf("Enter Starting Year:");
	scanf("%d",&n);
	printf("Enter Ending Year:");
	scanf("%d",&m);
	while(n <= m)
	{
		if((n%4==0 && n%100!=0) || (n%400==0))
		{
			printf("%d",n);
		}
		n++;
	}
	getch();





}
