#include<stdio.h>
main()
{
    int *ptr1,*ptr2,n,i,a1[n],a2[n];
    printf("Enter Array length : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a1[%d] : ",i);
        scanf("%d",&a1[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("a2[%d] : ",i);
        scanf("%d",&a2[i]);
    }
    ptr1=a1;
    ptr2=a2;
    int sum[n];
    for(i=0;i<n;i++)
    {
        sum[i]=*(ptr1+i)+*(ptr2+i);

    }
    printf("Sum Of Two 1D Array is : \n");
    for(i=0;i<n;i++)
    {
        printf("Sum[%d] : %d",i,sum[i]);
    }


}
