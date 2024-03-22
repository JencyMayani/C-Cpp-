#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c,d;
	clrscr();
	printf("Enter Value Of A:\n");
	scanf("%d",&a);
	printf("Enter Value Of B:\n");
	scanf("%d",&b);
	printf("Enter Value Of C:\n");
	scanf("%d",&c);
	printf("Enter Value Of D:\n");
	scanf("%d",&d);
	if(a==b || b==c || c==a || c==d || c==b)
	{
		printf("All Number Are Same");

	}
	else
	{
		if(a>b)
		{
			if(a>c)
			{
				if(a>d)
				{
				printf("%d is maximum",a);
				}
				else
				{
				printf("%d is maximum",d);
				}
			}
			else
			{
				if(c>d)
				{
				printf("%d is maximum",c);
				}
				else
				{
				printf("%d is maximum",d);
				}
			}
		}
		else
		{
			if(b>c)
			{
				if(b>d)
				{
				printf("%d is maximum",b);
				}
				else
				{
				printf("%d id maximum",d);
				}
			}
			else
			{
				if(c>d)
				{
				printf("%d is maximum",c);
				}
				else
				{
				printf("%d is maximum",d);
				}
			}
		}
	}
	getch();

















}

