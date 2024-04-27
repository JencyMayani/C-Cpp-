#include"my_function2.c"
void main()
{
    int *ptr;
    int *ptr2;
    int a = getint("Enter A:");
    int b = getint("Enter B:");
    printf("Before Swapping :\n a=%d \n b=%d",a,b);
    ptr = a;
    a = b;
    ptr2 = &ptr;
    printf("After Swapping :\n a=%d \n b=%d",a,*ptr2);

}    



