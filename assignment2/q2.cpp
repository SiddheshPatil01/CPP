#include<iostream>
using namespace std;

class Toollbooth{
    double money;
    int cars;

    public :
    Toollbooth(){
        this->money =0;
        this->cars=0;
    }

    void payingCar(){
        this->cars = this->cars +1;
        this->money = this->money + 0.50;
    }

    void nopay(){
        this->cars = this->cars +1;
    }

    void printOnConsole(){
        cout<<"Number of paying Cars :" <<(this->money)*2<<endl;
        cout<<"Number of non paying Cars :"<< this->cars - ((this->money)*2)<<endl;
    }

    int menu(){
        int choice;
        cout<<"ENTRY : 0"<<endl;
        cout<<"Paying Car : 1"<<endl;
        cout<<"Non-paying Car : 2"<<endl;
        cout<<"Print Total Car Entries :  3"<<endl;
        cin>>choice;

        if(choice==0){
            cout<<"Thank you for using out app!!"<<endl;
        }

        return choice;
    }
};

int main(){
    Toollbooth c1;
    
    int choice = c1.menu();
    while(choice !=0){
        switch(choice){
             
            case 1:
                 c1.payingCar();
            break;
            case 2:
                c1.nopay();
            break;

            case 3: 
                c1.printOnConsole();
                break;
            default:
                cout<<"Invalid Entry!!"<<endl;
            break;
        }

            choice = c1.menu();
    }
    //c1.printOnConsole();
    return 0;
}