#include<stdio.h>
main()
{
    char s[150];
    printf("Enter Sentence : ");
    scanf("%[^\n]",&s);
    FILE *f1 = fopen("demo1.txt","w");
    fprintf(f1,"%s",s);
    FILE *f2 = fopen("demo2.txt","w");
    if(f2==NULL)
    {
        printf("ERROR");

    }
    else
    {
    	fprintf(f2,"%s",s);
	}

    fclose(f1);
    fclose(f2);
}
