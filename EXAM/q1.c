#include<stdio.h>
void main()
{
    int n,sum=0,f,l;
    printf("Enter 3 Digit Number:");
    scanf("%d",&n);
    l = n%10;
    while(n>9)
    {
        n=n/10;
        f=n;
    }
    sum = f+l;
    printf("Sum Of First And Last Digit : %d",sum);
}
