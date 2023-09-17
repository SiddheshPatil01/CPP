#include<iostream>
using namespace std;
namespace Nstudents{
class Student{
    private:

    int roll;
    string name;
    int marks;

    public:

    void initDate(){
     this->roll =0;
     this->name="No student!";
     this->marks=0;
     

}

void printDateOnConsole(){
    cout<<"Roll NO : "<<this->roll;
    cout<<"Name : "<<this->name;
    cout<<"Marks : "<<this->marks;
    
}

void acceptDateFromConsole(){
    int roll;
    string name;
    int marks;
    cout<<"Enter Roll number :";
    cin>>roll;
    this->roll = roll;
    cout<<"Enter name :";
    cin>>name;
    this->name= name;
    cout<<"Marks :";
    cin>>marks;
    this->marks= marks;
}

int menu (){
    cout<<"Press '0' to EXIT"<<endl;
    cout<<"Press '1' to Enter Record"<<endl;
    cout<<"Press '2' to Print Record"<<endl;
    int choice ;
    cout<<"Enter the Choice : ";
    cin>>choice;

    if(choice ==0){
        cout<<"Thank you !!"<<endl;
    }

    return choice;
}
};

}

int main(){

    class Student s1;
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