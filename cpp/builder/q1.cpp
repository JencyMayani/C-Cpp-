#include<iostream>
using namespace std;

class Train{
private:
    int train_number;
    string train_name;
    string source;
    string destination;
    string train_time;

public:
    void setTrainDetails(int train_number,string train_name,string source,string destination, string train_time) 
	{
		this->train_number = train_number;
   	 	this->train_name = train_name;
    	this->source = source;
    	this->destination = destination;
    	this->train_time = train_time;
       
    }

    void displayTrainDetails() 
	{
        cout << "Train Number: " << train_number << endl;
        cout << "Train Name: " << train_name << endl; 
        cout << "Source: " << source << endl; 
        cout <<"Destination: "<< destination;      
		 cout<<"Train Time:" << train_time;  
	}
	void getTrainNumber()
	{
		cout << "Train Number:" << train_number << endl;
	}
};

int main() {

    // Creating objects of class Train
     Train trains[3];

     // Setting details for each object
     trains[0].setTrainDetails(1234,"Rajdhani Express","Station A","Station B","5:00 AM");
     trains[1].setTrainDetails(5678,"Superfast","Station C","Station D","6:30 AM");
     trains[2].setTrainDetails(9101,"Local","Station E","Station F","8:45 PM");

   int option,i;

   do
   {
       cout<<"Railway Reservation System"<<endl 
	   <<"Enter 1 to Display All Records"<<endl
	   <<"Enter 2 to Search by Train Number"<<endl
	   <<"Enter 3 to Exit";
     
      cin>>option;

      switch(option){
          case 1:
             
             for(i=0;i<3;i++){
                 trains[i].displayTrainDetails();
             }
             break;

          case 2:
            int searchNumber;

            cout<<"Enter the Train Number to search:";
            cin>>searchNumber;

            
            for(i=0;i<3;i++){
                if(trains[i].getTrainNumber()==searchNumber){
                    trains[i].displayTrainDetails();
                    break;
                }
                
                if(i==2){
                    cout<<"Record not found";     
				}
            
			        break ;

           case 3:
               return ; 

           default :
               cout<<"Invalid choice! "        
			   
    
   }while(choice != 3);

   return ;
}
