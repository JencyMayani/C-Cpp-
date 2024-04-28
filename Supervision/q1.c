#include<stdio.h>
main()
{
    int i,n1=50,n2=70;
    FILE *fe = fopen("even_file.txt","w");
    FILE *fo = fopen("odd_file.txt","w");
    fprintf(fe,"Even Numbers : \n");
    fprintf(fo,"Odd Numbers : \n");
    for(i=50;i<=70;i++)
    {
        if(i%2==0)
        {
            fprintf(fe,"%d, ",i);
        }
        else
        {
            fprintf(fo,"%d, ",i);
        }
    }
    fclose(fe);
    fclose(fo);
}
