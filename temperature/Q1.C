#include<stdio.h>
#include<conio.h>
main()
{
	char i;
	clrscr();
	i='a';
	do
	{
		printf("%c ",i);
		i+=4;
	}while(i<='z');
	getch();


}