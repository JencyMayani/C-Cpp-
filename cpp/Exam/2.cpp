#include<iostream>
using namespace std;

class BankAccount
{
	public:
		string name;
	    int accountnumber;
	    int balance;
		int credit;
		int debit;
	
	public:
	
	    void setdata()
	    {
			cout << "Enter Owner Name : " ;
	        cin>>name;
	        cout << "Enter Account No : " ;
	        cin>>accountnumber;
	        cout<<"Enter Total Balance:";
	        cin>>balance;
	     }
		void Credit()
		{
			cout<<"Enter Credit Amount:";
			cin>>credit;
			
			cout<<"Credit:"<<credit<<endl;
		}
		void Debit(){
			cout<<"Enter Debit Amount:";
			cin >>debit;
			
			cout<<"Debit:"<<debit<<endl;
		}
	    void Balance()
	    {
	    	balance+=credit;
	    	cout<<"Enter Balance Amount:";
			cin>>balance;
			
			cout<<"Balance:"<<balance<<endl;
		}
};
int main()
{
    BankAccount b;
    b.setdata();
    b.Credit();
    b.Debit();
    b.Balance();
    
   
}
