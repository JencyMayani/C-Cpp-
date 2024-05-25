#include<iostream>
using namespace std;
class Compare
{
	private:
		int a;
	public:
		void setvalues(int a)
		{
			this->a=a;
		}
		void getvalues()
		{
			cout<<"A:"<<a<<endl;
		}
		Compare operator <(Compare c)
		{
			Compare tmp;
			tmp.a = this->a<c.a;
			return tmp;
		}
};
int main()
{
	Compare c1,c2,c3;
	c1.setvalues(4);
	c2.setvalues(6);
	c3= c1<c2;
	c3.getvalues();
	
	
	
	
	
}
