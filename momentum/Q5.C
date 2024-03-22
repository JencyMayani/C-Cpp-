#include<stdio.h>
#include<conio.h>
main()
{
	float u , b , s;
	clrscr();
	printf("Enter Your Electricity Unit:\n");
	scanf("%f",u);
	if(u<=50)
	{
		b=u*0.5;
	}
	else if(u<=150)
	{
		b=50*0.5+(u-50)*0.75;
	}
	else if(u<=250)
	{
		b=50*0.5+100*0.75+(u-150)*1.2;
	}
	else
	{
		b=((u-250)*1.5)+(150*1.2)+(100*0.75)+(50*0.5);
	}
	s=b*20/100
	printf("Total Bill= Rs%.2f\n",b);
	getch();

}