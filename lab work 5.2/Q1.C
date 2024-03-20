#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c;
	clrscr();
	printf("Enter Value Of First Number:");
	scanf("%d",&a);
	printf("Enter Value Of Second Number:");
	scanf("%d",&b);
	printf("Enter Value Of Third Number:");
	scanf("%d",&c);
	if(a==b || b==c || c==a)
	{
		printf("All Number Are Same");

	}
	else
	{
		if(a<b)
		{
			if(a<c)
			{
				printf("%d is minimum",a);
			}
			else
			{
				printf("%d is minimum",c);
			}
		}
		else
		{
			if(b<c)
			{
				printf("%d is minimum",b);
			}
			else
			{
				printf("%d is minimum",c);
			}
		}
	}
	getch();

















}

