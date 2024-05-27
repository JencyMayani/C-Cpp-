#include<iostream>
using namespace std;
class Shape{
	protected:
		string colour;
		int r;
		int l;
	public:
		void setdata(string colour,int r,int l)
		{
			this->colour=colour;
			this->r=r;
			this->l=l;
		}		
		void getdata()
		{
			cout<<"Colour"<<colour<<endl
			<<"R:"<<r<<endl
			<<"L:"<<l<<endl;
		}
};
class Circle : public Shape
{
	private:
		int area;
	public:
		void setdata(string colour,int r,int l)
		{
			 Shape :: setdata(string colour,int r,int l);
		}
		void getdata()
		{
			int Shape::getdata();
		}
		void Area()
		{
			area = 3.14*r*r;
			cout<<"Area Of Circle Is:"<<area<<endl;
		}
};
class Rectangle: public Shape
{
	
	public:
		area1;
		void Area()
		{
			area1=l*r;
			cout <<"Area Of Rectangle Is:"<<area1<<endl;
		}
};

int main()
{
	Circle c;
	Rectangle rl;
	c.Area();
	r.Area();
	
}
