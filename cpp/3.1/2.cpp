#include<iostream>
using namespace std;

class customer
{
	private:
	int cust_id;
	string cust_name;
 	int cust_age;
 	string cust_city;
	string cust_mobile_number;
 	int cust_simcard_validity;
 	string cust_telecom_brand_name;
 	
 	public:
 		void setdata(int cust_id,string cust_name,int cust_age,string cust_city,int cust_mobile_number,int cust_simcard_validity,string cust_telecom_brand_name)
 		{
 			this->cust_id = cust_id;
 			this->cust_name = cust_name;
 			this->cust_age = cust_age;
 			this->cust_city = cust_city;
			this->cust_mobile_number = cust_mobile_number;
 	 		this->cust_simcard_validity = cust_simcard_validity;
 	 		this->cust_telecom_brand_name = cust_telecom_brand_name;
		}
		
		void getdata()
		{
			cout << "Enter id:"<< cust_id<<endl
			<< "Enter name:"<<cust_name<<endl
			<< "Enter age:"<<cust_age<<endl
			<<"Enter city:"<<cust_city<<endl
			<<"Enter mobile number:"<<cust_mobile_number<<endl
			<<"Enter Simcard validity in years:"<<cust_simcard_validity<<endl
			<<"Enter telecom brand name:"<<cust_telecom_brand_name<<endl;
		}
};

int main(){
	int i;
	customer c[5];
	for(i=0;i<5;i++)
	{
		int cust_id;
		string cust_name;
 		int cust_age;
 		string cust_city;
		string cust_mobile_number;
 		int cust_simcard_validity;
 		string cust_telecom_brand_name;
 		
 		cout << "Enter Id:";
 		cin >> cust_id;
 		cout << "Enter name:";
 		cin >> cust_name;
 		cout << "Enter age:";
 		cin >> cust_age;
 		cout << "Enter city:";
 		cin >> cust_city;
 		cout << "Enter mobile number:";
 		cin >> cust_mobile_number;
 		cout << "Enter simcard validity:";
 		cin >> cust_simcard_validity;
 		cout << "Enter telecom brand name:";
 		cin >> cust_telecom_brand_name;
 		
 		c[i].setdata(cust_id, cust_name, cust_age, cust_city, cust_mobile_number, cust_simcard_validity, cust_telecom_brand_name);
 		
 		}
 		for(i=0;i<5;i++)
		{
			c[i].getdata();
		}
 
	}
	
