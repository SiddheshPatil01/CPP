#include<iostream>
using namespace std;

struct Date{
    int day;
    int month;
    int year;
};


void initDate(struct Date *ptrDate){
     ptrDate->day =20;
     ptrDate->month=2;
     ptrDate->year=2001;
     

}

void printDateOnConsole(struct Date *ptrDate){
    cout<<"Date :"<<ptrDate->day<<"/"<<ptrDate->month<<"/"<<ptrDate->year<<endl;
    
}
void acceptDateFromConsole(struct Date *ptrDate){
    int day, month , year;
    cout<<"Enter Day :";
    cin>>day;
    ptrDate->day = day;
    cout<<"Enter Month :";
    cin>>month;
    ptrDate->month= month;
    cout<<"Enter Year :";
    cin>>year;
    ptrDate->year= year;
}

int menu (){
    cout<<"Press '0' to EXIT"<<endl;
    cout<<"Press '1' to Accept Date"<<endl;
    cout<<"Press '2' to Print Date"<<endl;
    int choice ;
    cout<<"Enter the Number : ";
    cin>>choice;

    if(choice ==0){
        cout<<"Thanks for using our app!!"<<endl;
    }

    return choice;
}


int main(){

    struct Date s1;
    initDate(&s1);
    
    int choice = menu();

    

    while(choice != 0){
       
        switch (choice){
            case 1: 
                acceptDateFromConsole(&s1);
                break;
            
            case 2:
                printDateOnConsole(&s1);
                break;

            default:
                cout<<"Invalid option!!";
                break;
        }

        choice = menu();
    }

    return 0;
}