#include<iostream>
using namespace std;

class Vehicle{
	public:
		virtual void startengine=0;
		void startengine()
		{
			cout <<"Vehicle Engine Is On..."<<endl;
		}
		
		virtual void drive=0;
		void drive()
		{
			cout <<"Driver Can Start Driving Car.."<<endl;
		}
		
};
class Car : public Vehicle{
	public :
		void startengine()
		{
			cout <<"Car Engine Is On..."<<endl;
		}
		void drive()
		{
			cout <<"Driver Can Start Driving Car.."<<endl;
		}
};
class Bike : public Vehicle{
	public:
		void startengine()
		{
			cout <<"Bike Engine Is On..."<<endl;
		}
		void drive()
		{
			cout <<"Driver Can Start Driving Bike.."<<endl;
		}
};
int main()
{
	Vehicle *v[2];
	car c;
	Bike b;
	v[0]=c;
	v[1]=&b;
	v[0].startengine();
	v[0].drive();
	v[1].startengine();
	v[1].drive();
}
