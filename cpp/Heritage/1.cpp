#include<iostream>
using namespace std;
class shape{
		protected:
		int height;
		int width;
	public:
		void setvalue(int height,int width)
		{
			this->height=height;
			this->width=width;
		}
		void getvalue()
		{
			cout<<"Enter Height:"<<height<<endl
			<<"Enter Width:"<<width<<endl;
		}
};
class triangle : public shape
{
	public:
		void AreaOfTriangle(int height,int width)
		{
			cout<<"Area Of Triangle:"<<height*width/2<<endl;
		}
};
class rectangle :public shape
{
	public:
		void AreaOfRectangle(int height,int width)
		{
			cout<<"Area Of Rectangle:"<<height*width<<endl;
		}
};
int main()
{
	triangle t;
	rectangle r;
	t.AreaOfTriangle(4,5);
	r.AreaOfRectangle(5,4);
}
