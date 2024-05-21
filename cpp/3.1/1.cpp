#include<iostream>
using namespace std;

class Student
{
	private:
		 int stu_id;
		 string stu_name;
		 int stu_age;
		 string stu_course;
 		 string stu_city;
 		 string stu_email;
         string stu_college;
        
    public:
    	void setdata(int stu_id, string stu_name, int stu_age,string stu_course, string stu_city, string stu_email,string stu_college)
		{	
		 this->stu_id = stu_id;
		 this->stu_name = stu_name;
		 this->stu_age = stu_age;
		 this->stu_course = stu_course;
 		 this->stu_city = stu_city;
 		 this->stu_email = stu_email;
         this->stu_college = stu_college;
     	} 
     	
     	void getdata()
     	{
     		cout << "stu_id:"<<stu_id<<endl
     			 << "stu_name:"<<stu_name<<endl
     			 << "stu_age:"<<stu_age<<endl
     			 <<"stu_course:"<<stu_course<<endl
     			 <<"stu_city:"<<stu_city<<endl
     			 <<"stu_email:"<<stu_email<<endl
     			 <<"stu_college:"<<stu_college<<endl;
		 }
     	
};

int main(){
	int i;
	Student s[5];
	for(i=0;i<5;i++)
	{
		int stu_id;
		 string stu_name;
		 int stu_age;
		 string stu_course;
 		 string stu_city;
 		 string stu_email;
         string stu_college;
		
		cout << "Enter Id:";
		cin>>stu_id;
		cout<< "Enter Name:";
		cin>>stu_name;
		cout<<"Enter Age:";
		cin>>stu_age;
		cout<<"Enter course:";
		cin>>stu_course;
		cout<<"Enter city:";
		cin>>stu_city;
		cout<<"Enter email:";
		cin>>stu_email;
		cout<<"Enter college:";
		cin>>stu_college;
		s[i].setdata(stu_id,stu_name,stu_age,stu_course,stu_city,stu_email,stu_college);
	}
	for(i=0;i<5;i++)
	{
		s[i].getdata();
	}
	
}
