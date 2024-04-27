#include<stdio.h>
main()
{
    FILE *fp = fopen("demo.txt","w");
    if(fp==NULL)
    {
    	printf("ERROR");
    	
	}
	else
	{
		fprintf(fp,"My Self Jency Mayani");
    fclose(fp);
	}
    
}
