#include<iostream>
using namespace std;

class Date{
    private:

    int day;
    int month;
    int year;

    public:

    void initDate(){
     this->day =20;
     this->month=2;
     this->year=2001;
     

}

void printDateOnConsole(){
    cout<<"Date :"<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    
}
void acceptDateFromConsole(){
    int day, month , year;
    cout<<"Enter Day :";
    cin>>day;
    this->day = day;
    cout<<"Enter Month :";
    cin>>month;
    this->month= month;
    cout<<"Enter Year :";
    cin>>year;
    this->year= year;
}

int menu (){
    cout<<"Press '0' to EXIT"<<endl;
    cout<<"Press '1' to Accept Date"<<endl;
    cout<<"Press '2' to Print Date"<<endl;
    int choice ;
    cout<<"Enter the Number : ";
    cin>>choice;

    if(choice ==0){
        cout<<"Thank you !!"<<endl;
    }

    return choice;
}
};



int main(){

    class Date s1;
    s1.initDate();
    
    int choice = s1.menu();

    

    while(choice != 0){
       
        switch (choice){
            case 1: 
                s1.acceptDateFromConsole();
                break;
            
            case 2:
                s1.printDateOnConsole();
                break;

            default:
                break;
        }

        choice = s1.menu();
    }

    return 0;
}