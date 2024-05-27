#include<iostream>
using namespace std;

class Calculator
{
	private:
	    int a;
		int b;
	public:
	    setdata()
	    {
	        cout << "Enter First Number : ";
	        cin>>a;
	        cout << "Enter Second Number : ";
			cin>>b;
		}
		getdata()
		{
			cout<<"A:"<<a<<endl
			<<"B:"<<b<<endl;
		
	        try
	        {
	            if (b != 0)
	            {
	                cout << "Division Of "<<a<<"And "<<b <<"Is"<< a/b ;
	            }
	            else
	            {
	                throw 0;
	            }
	        }
	
	        catch(int n)
	        {
	            cout << "Can't Divide By 0" << endl;
	        }
	         catch(char n)
	        {
	            cout << "Can't Divide By 0" << endl;
	        }
	         catch(...)
	        {
	            cout << "Can't Divide By 0" << endl;
	        }
	    }
};
int main()
{
    Calculator c;
    c.setdata();
    c.getdata();
    
}
