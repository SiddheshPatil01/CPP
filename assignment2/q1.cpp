#include<iostream>
using namespace std;

class Volume{
    double height ;
    double width;
    double length;

    public: 

    Volume(){
        this->height=0;
        this->length=0;
        this->width=0;
    }

    void accept(){
        cout<<"Heigth : ";
        cin>>this->height;

        cout<<"length : ";
        cin>>this->length;

        cout<<"Width : ";
        cin>>this->width;
    }

    void volume(){
        cout<<"Volume ="<<(this->height * this->width * this->length)<<endl;
    }

   int menu(){
        int choice;

        
        cout<<"0. Exit"<<endl;
        cout<<"1. Enter dimentions : "<<endl;
        cout<<"2. Get volume : "<<endl;
        cout<<"Enter choice : "<<endl;
        cin>>choice;

        if(choice ==0){ 
            cout<<"Thank you for using our app!!"<<endl;
        }

        return choice;
    }
};


int main(){

    Volume box;
    int  choice = box.menu() ;

    
    
    while(choice != 0){

    switch(choice){
        case 1:
            box.accept();
            break;

        case 2:
            box.volume();
            break;

        default:
            cout<<"Invalid choice!! ";
            break;
        
    }

        choice = box.menu() ;
    }
    return 0;
}