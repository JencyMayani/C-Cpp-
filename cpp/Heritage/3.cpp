#include<iostream>
using namespace std;
class A{
	protected:
		int id;
		string name;
		string role;
		int salary;
		string experience;
		string comp_name;
		string address;
		string email;
		int contact;
	public:
		void setvalues1()
		{
			cout<<"Enter Id:";
			cin>>id;
			cout<<"Enter Name:";
			fflush(stdin);
			cin>>name;
			cout<<"Enter Role:";
			cin>>role;
		}
		
};
class B : public A
{
	public:
		void setvalues2()
		{
			cout<<"Enter Salary:";
			cin>>salary;
			cout<<"Enter Experience:";
			cin>>experience;
		
		}
	
};
class C : public B
{
	public:
		void setvalues3()
		{
			cout<<"Enter Company Name:";
			cin>>comp_name;
			cout<<"Enter Address:";
			cin>>address;
		}
		void getvalues1()
		{
			cout<<"Name:"<<name<<endl
			<<"Role"<<role<<endl
			<<"salary:"<<salary<<endl;
		}	
};
class D : public C
{
	public:
		void setvalues4()
		{
			cout<<"Enter Email:";
			cin>>email;
			cout<<"Enter Contact:";
			cin>>contact;
		}
		void getvalues2()
		{
			cout<<"Id:"<<id<<endl
			<<"Name:"<<name<<endl
			<<"Role"<<role<<endl
			<<"salary:"<<salary<<endl
			<<"Experience:"<<experience<<endl
			<<"Company Name:"<<comp_name<<endl
			<<"Address:"<<address<<endl
			<<"Email:"<<email<<endl
			<<"Contact:"<<contact<<endl;
		}	
};
int main()
{
	A a;
	B b;
	C c;
	D d;
	a.setvalues1();
	b.setvalues2();
	c.setvalues3();
	c.getvalues1();
	d.setvalues4();
	d.getvalues2();
}

