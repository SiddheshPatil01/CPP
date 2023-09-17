#include<iostream>
using namespace std;

class Cylinder{
    private :
        double radius, heigth;
        double volume;
    public: 
        Cylinder(){
            this->radius =0;
            this->heigth=0;
            this->volume=0;
        }
        Cylinder(double radius, double heigth): radius(radius) ,heigth(heigth){
            
        }

        void getRadius(){
            cout<<"Radius is  : "<<this->radius;
            
        }
        void setRadius(){

            
            cout<<"Enter Radius : ";
            cin>>this->radius;
            
        }

        void getHeight(){
            cout<<"heigth is : "<<this->heigth<<endl;
            
        }
        void setHeight(){

            
            cout<<"Enter heigth : ";
            cin>>this->heigth;
            
        }

        double getVol(){
            this->volume = 3.14 * (this->radius) * (this->radius)*(this->heigth) ;
            
            return this->volume;
        }

        void printVol(){
            cout<<"Volume of cylinder is : "<<getVol();
        }
};

int main(){
    Cylinder c;
    
    c.getRadius();
    c.setRadius();
    //c.getHeight();
    c.setHeight();
    //c.getVol();
    c.getRadius();
    //c.printVol();
    
    return 0;
}