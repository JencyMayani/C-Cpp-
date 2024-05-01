#include<stdio.h>
struct mobile
{
    char Company_Name[20];
    char Color[10];
    char Model[10];
    int Price;
};

main()
{
    int n,i;
    printf("Enter Number Of Moblie Details : ");
    scanf("%d",&n);
    struct mobile m[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Company Name : ");
        scanf("%s",&m[i].Company_Name);
        printf("Enter Color : ");
        scanf("%s",&m[i].Color);
        printf("Enter Model : ");
        scanf("%s",&m[i].Model);
        printf("Enter Price : ");
        scanf("%d",&m[i].Price);
        printf("\n");
        
    }
    printf("Mobile Data : \n");
    for(i=0;i<n;i++)
    {
        printf("Company Name : %s\n",m[i].Company_Name);
        printf("Color : %s\n",m[i].Color);
        printf("Model : %s\n",m[i].Model);
        printf("Price : %d\n",m[i].Price);
        printf("\n");
    }

}
