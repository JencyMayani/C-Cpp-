#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	printf("Enter Any Alphabet, Number, Symbol:\n");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		 printf("This is Alphabet\n");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("This is Number");
	}
	else
	{
		printf("This is Symbol");
	}
	getch();

}
