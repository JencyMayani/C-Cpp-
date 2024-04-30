#include<stdio.h>
main()
{
    int n,a[n],i;
    int *ptr1;
    int *ptr2;
    printf("Enter Array Size:");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
    	printf("a[%d]=%d\n",i,a[i]);
    	scanf("%d %d",&i ,a[i]);
	}
	ptr1 = a;
	ptr2 = a+n-1;
	 for(i=0; ptr1<ptr2;ptr1++,ptr2--)
	 {
	 	*ptr1 = *ptr1+*ptr2;
    	*ptr2 = *ptr1-*ptr2;
    	*ptr1 = *ptr1-*ptr2;
	 }
}
    
    
    
   


