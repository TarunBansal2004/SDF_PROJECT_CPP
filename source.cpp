#include<iostream>
#include<cstdlib>
using namespace std;

void intro()
{
    cout<<"\t\t\t\t\t**********TRAVEL MANAGEMENT SYSTEM**********"<<endl;
    //Additional Code
}
 
class Hotel  //HOTEL GENERALISED CLASS
{
    public:
    string name;
    string location;
    int numberRooms;
    int roomAvailable;
    
    public:
    Hotel(string name = "HOTEL" , string location = "AREA 51" , int numberRooms = 404 , int roomAvailable = 121)
    {
       this->name=name;
       this->location=location;
       this->numberRooms=numberRooms;
       this->roomAvailable=roomAvailable;
    }
    //void display();   
    void mainMenu(); 
    // void rooms(); 
    // void add(); 
    // void edit(); 
    // ~ Hotel() {}
};

void Hotel::mainMenu()
{
    system("clear");
    cout<<"\t\t\t\t\t********** M E N U **********"<<endl;
    cout<<"\t\t\t\t\t1. BOOK A ROOM\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t2. CUSTOMER RECORD\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t3. ROOM ALLOTED\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t4. EDIT RECORD\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t5. EXIT\t\t\t\t\t\n";

}

int main()
{
    intro();
    cin.get();
    Hotel hotel;
    hotel.mainMenu();

    return 0;
}