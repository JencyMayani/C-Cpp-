#include<iostream>
using namespace std;
class Message
{
	protected:
		string msg;
	public:
		Message()
		{
			cout<<"Hello";
			
		}
		void print(string msg)
		{
			this->msg=msg;
		}	
		void print()
		{
			cout<<msg;
		}
	
};
int main()
{
	Message m;
	m.print(" World");
	m.print();
}
