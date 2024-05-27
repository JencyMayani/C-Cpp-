#include<iostream>
using namespace std;

class Laptop
{
	private:
		int price;
		string name;
		string processor;
	public:
		Laptop(int price,string name,string processor)
		{
			this->price=price;
			this->name=name;
			this->processor=processor;
		}
		void getdata()
		{
			cout<<"Price Of Laptop:"<<price<<endl
			<<"Name Of Laptop:"<<name<<endl
			<<"Processor Of Laptop"<<processor<<endl;
			
		}
};
int main()
{
	Laptop l;
	l.Laptop(250000,Hp,Intel)
	l.getdata();
}
