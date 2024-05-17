#include"iostream"
using namespace std;

class Employee{
	private:
	    int emp_id;
		string emp_name;
		int emp_age;
		string emp_role;
		int emp_salary;
		string emp_city;
		string emp_experience;
		string emp_company_name;	
		
	public:
		void setempdata()
		{
			int i;
	    {
			cout <<"Enter ID:";
			cin >> emp_id;
			cout <<"Enter Name:";
			cin>> emp_name;
			cout <<"Enter Age:";
			cin >> emp_age;
			cout<< "Enter Role:";
			cin >> emp_role;
			cout << "Enter salary:";
			cin >> emp_salary;
			cout <<"Enter city:";
			cin >>emp_city;
			cout<<"Enter Experience:";
			cin >>emp_experience;
			cout <<"Enter Company Name:";
			cin >> emp_company_name;		
		}
	}	
	void getempdata()
	{
		cout << "emp_id:" << emp_id << endl
		<< "emp_name:" << emp_name << endl
		<< "emp_age:" << emp_age << endl
		<< "emp_role:" << emp_role << endl
		<< "emp_salary" << emp_salary << endl
		<< "emp_city" << emp_city << endl
		<< "emp_experience" << emp_experience << endl
		<< "emp_company_name" << emp_company_name <<endl;
	}
};
int main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setempdata();
	e2.setempdata();
	e3.setempdata();
	e4.setempdata();
	e5.setempdata();
	
	e1.getempdata();
	e2.getempdata();
	e3.getempdata();
	e4.getempdata();
	e5.getempdata();
	
}
