#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter Value Of First Number:");
	scanf("%d",&a);
	printf("Enter Value Of Second Number:");
	scanf("%d",&b);
	printf("Enter Value Of Third Number:");
	scanf("%d",&c);
	printf("Enter Value Of Fourth Number:");
	scanf("%d",&d);
	if(a==b || b==c || c==d || d==b || d==a)
	{
		printf("All Number Are Equal");
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
				{
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
					printf("%d is maximum",d);
				}
			}
			else
			{
			}
		}
	}