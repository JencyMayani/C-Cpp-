#include<iostream>
using namespace std;

int main()
{
	int n,a[n],i;
	cout << "Enter Array Size:";
	cin >> n;
	cout << "Enter Array Elements:"<< endl;
	for(i=0;i<n;i++)
	{
		cout << "a["<< i << "] = ";
		cin >> a[i];
	}
	cout << "Even Elements of array:";
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i]<<" ";
		}
	}
	
}
