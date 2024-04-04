#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,num;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(s=0;s<=i;s++)
		{
			printf("  ");
		}
		num=(i%2==0)?1:0;
		for(j=i;j<5;j++)
		{
			printf("%d ",num);
		}
		printf("\n");
	}
	getch();

}