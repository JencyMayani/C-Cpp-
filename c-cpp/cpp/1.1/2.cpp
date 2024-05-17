#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n=0,i,j,a[n];
    cout <<"Enter First Number : ";
    cin >>n1;
    cout << "Enter Second Number : ";
    cin >>n2;
    for(i=n1;i<=n2;i++)
    {
        if(i%4==0)
        {
            a[n]=i;
            n++;
        }
    }
    cout<< "The Array Is : ";
    for(j=0;j<n;j++)
    {
        cout<< a[j];
    }

}
