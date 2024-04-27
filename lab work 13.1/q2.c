#include<stdio.h>
main()
{
    int n = 50,i;
    FILE *fp = fopen("demo2.txt","w");
    fprintf(fp,"Numbers Divisible By Both 3 & 5 Between 1 To 50\n");
    if(fp==NULL)
    {
    	printf("ERROR");
	}
	else
	{
		for(i = 1; i<=50; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            fprintf(fp,"%d\n",i);
        }
    }
    fclose(fp);


		
	}
    

}
