#include<iostream>
using namespace std;
class Hotel
{
	private:
	 int hotel_id;
	 static int idcounter;
	 string hotel_name;
     string hotel_type;
     int hotel_rating; 
     static string hotel_location;
     int hotel_establish_year;
     int hotel_staff_quantity;
     int hotel_room_quantity;
     
     public:
     	void setdata(string hotel_name,string hotel_type,int hotel_rating,int hotel_establish_year,int hotel_staff_quantity,int hotel_room_quantity)
     	{
     		hotel_id = idcounter++;
     		this->hotel_name = hotel_name;
     		this->hotel_type = hotel_type;
     		this->hotel_rating = hotel_rating; 
     		this->hotel_establish_year = hotel_establish_year;
     		this->hotel_staff_quantity = hotel_staff_quantity;
     		this->hotel_room_quantity = hotel_room_quantity;
     
		}
		void getdata()
		{
			cout <<"Enter Hotel Id:"<<hotel_id<<endl
			<<"Enter Hotel Name:"<<hotel_name<<endl
			<<"Enter Hotel Type:"<<hotel_type<<endl
			<<"Enter Hotel Rating:"<<hotel_rating<<endl
			<<"Enter Location:"<<hotel_location<<endl
			<<"Enter Establish year:"<<hotel_establish_year<<endl
			<<"Enter Number Of Staff:"<<hotel_staff_quantity<<endl
			<<"Enter Number Of Rooms:"<<hotel_room_quantity<<endl;
			
			
		}
};
int Hotel::idcounter =101;
string Hotel::hotel_location = Mumbai;

int main()
{
	int n,i;
	Hotel h[n];
	for(i=0;i<n;i++)
	{
		
	 string hotel_name;
     string hotel_type;
     int hotel_rating; 
     int hotel_establish_year;
     int hotel_staff_quantity;
     int hotel_room_quantity;
		cout<<"Enter Hotel Name:";
		cin>>hotel_name;
		cout<<"Enter Hotel Type:";
		cin>>hotel_type;
		fflush(stdin);
		cout<<"Enter Hotel Rating:";
		cin>>hotel_rating;
		cout<<"Enter Establish year:";
		cin>>hotel_establish_year;
		cout<<"Enter Number Of Staff:";
		cin>>hotel_staff_quantity;
		cout<<"Enter Number Of Rooms:";
		cin>>hotel_room_quantity;
		
		h[i].setdata( hotel_name, hotel_type, hotel_rating, hotel_establish_year, hotel_staff_quantity,hotel_room_quantity);
	}
	Hotel::hotel_location("Mumbai");
	for(i=0;i<n;i++)
	{
		h[i].getdata();
	}
}
