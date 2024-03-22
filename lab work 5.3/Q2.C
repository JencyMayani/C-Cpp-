#include<stdio.h>
#include<conio.h>
main()
{

	int n;
	char ch;
	clrscr();
	printf("Press 1 For English\n");
	printf("Press 2 For Hindi\n");
	printf("Press 3 For Gujarati\n");
	printf("Enter Your Choice:\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			clrscr();
			printf("\nPress I For Internet Recharge");
			printf("\nPress T For Top-up Recharge");
			printf("\nPress S For Special Recharge");
			printf("\nEnter Your Choice\n");
			fflush(stdin);
			scanf("%c",&ch);
			switch(ch)
			{
				case 'I':
				case'i':
				       clrscr();
				       printf("You Have Successfully Done Internet Recharge\n");
				       break;
				case 'T':
				case't':
					clrscr();
					printf("You Have Successfully Done Top-up Recharge\n");
					break;
				case 'S':
				case's':
					clrscr();
					printf("You Have Successfully Done Special Recharge\n");
					break;
				default:
				printf("\nInvalid Choice\n");
			}
			break;
		case 2:
			clrscr();
			printf("\nInternet Recharge Ke Liye I Dabaye");
			printf("\nTop-up Recharge Ke Liye T Dabaye");
			printf("\nSpecial Recharge Ke Liye S Dabaye");
			printf("\nEnter Your Choice\n);
			fflush(stdin);
			scanf("%c",&ch);
			switch(ch)
			{
				case 'I':
				case'i':
				      clrscr();
				      printf("Apka Internet Recharge Ho Gaya Hai\n");
				      break;
				case 'T':
				case't':
				      clrscr();
				      printf("Apka Top-up Recharge Ho Gaya Hai\n");
				      break;
				case 'S':
				case's':
					clrscr();
					printf("Apka Special RechargeHo Gaya Hai\n");
					break;
				default:
				printf("Invalid Choice\n");

			}
			break;

		case 3:
			clrscr();
			printf("\nInternet Recharge Mate I Dabavo");
			printf("\nTop-up Recharge Mate T Dabavo");
			printf("\nSpecial Recharge Mate S Dabavo");
			printf("\nEnter Your Choice\n");
			fflush(stdin);
			scanf("%c",&ch);
			switch(ch)
			{
				case 'I':
				case'i':
					 clrscr();
					 printf("Tamaru Internet Recharge Thai Gau Che\n");
				break;
				case 'T':
				case't':
					clrscr();
					printf("Tamaru Top-up Recharge Thai Gayu Che\n");
				break;
				case 'S':
				case's':
					clrscr();
					printf("Tamaru Special RechargeThai Gayu Che\n");
				break;
				default:
				printf("Invalid Choice\n");

			}
			break;

		default:
			printf("Invalid Choice");
	}

	getch();


}



















