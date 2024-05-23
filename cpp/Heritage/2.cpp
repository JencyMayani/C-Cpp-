#include<iostream>
using namespace std;
class A
{
	protected:
		int i;
	public:
		void seti(int i)
		{
			this->i=i;
		}
		void geti()
		{
			cout<<"Enter I:"<<i<<endl;
			
		}
};
class Square : public A
{
	public:
		void square(int i)
		{
			cout << "Square :"<<i*i<<endl;
		}
};
class Cube : public A
{
	public:
		void cude(int i)
		{
			cout<<"cube :"<<i*i*i<<endl;
		}
};
int main()
{
	Square s;
	Cube c;
	s.square(2);
	c.cude(3);
}
