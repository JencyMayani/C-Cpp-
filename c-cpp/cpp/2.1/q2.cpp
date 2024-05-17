#include"iostream"
using namespace std;

class Car{
	private:
	    int car_id;
	    string car_company_name;
	    string car_color;
	    sting car_model;
	    int car_release_year;
	
	public:
		void setdata()
		{
			
			cout <<"Enter ID:";
			cin >> car_id;
			cout <<"Enter company name:";
			cin >> car_company_name;
			cout <<"Enter car color:";
			cin >> car_color;
			cout <<""
