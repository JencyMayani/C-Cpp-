#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		int b;
		int c;
		int d;
		int e;
	public:
		void setvalues(int a,int b, int c,int d,int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		void getvalues()
		{
			cout<<"A:"<<a<<endl
			<<"B:"<<b<<endl
			<<"C:"<<c<<endl
			<<"D:"<<d<<endl
			<<"E:"<<e<<endl;
		}
};
class B : public A
{
	public:
	calculate(int a,int b)
	{
		cout<<"Division of "<< a <<" And "<< b <<" is "<<a/b<<endl;
	}
	calculate(int a,int b,int c)
	{
		cout<<"Subraction of "<< a << b <<" And "<< c <<" is "<<a-b-c<<endl;
	}	
	calculate(int a,int b,int c,int d)
	{
		cout<<"Multiplication of "<< a << b << c <<" And "<< d <<" is "<<a*b*c*d<<endl;
	}
	calculate(int a,int b,int c,int d,int e)
	{
		cout<<"Addition of "<< a << b << c << d <<" And "<< e <<" is "<<a+b+c+d+e<<endl;	
	}
};
int main()
{
	B b;
	b.setvalues(1,2,3,4,5);
	
	b.B::calculate(1,2,3,4,5);
}
