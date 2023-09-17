#include<iostream>
using namespace std;

class Student{
    private:   
        int roll; 
        string name;
        char gender;
        int percentage;
        int sub1, sub2, sub3;
    
    public:
        Student(){

        this->name =" ";
        this->gender=' ';
        this->roll=0;
        this->percentage = 0;
        }

    void setname(){
        cout<<"Enter Name :  ";
        cin>>this->name;
    }

    void getname(){
        cout<<"Name : "<<this->name;
    }

    void setgender(){
        cout<<"Select Gender(M/F)  : ";
        cin>>this->gender;
    }
    void getgender(){
        cout<<"Gender : "<<this->gender;
    }
    void setRoll(int roll){
        cin>>this->roll;
    }

    void setRoll1(){
        int roll;
        cout<<"Enter Roll No. : "; 
        cin>>this->roll;
    }
    
    int getRoll(){
        return this->roll;
    }
    void inputMarks(){
        cout<<"Enter Marks for MATHS:";
        cin>>this->sub1;
        cout<<"Enter Marks for SCIENCE:";
        cin>>this->sub2;
        cout<<"Enter Marks for CHEMISTRY:";
        cin>>this->sub3;
    }

    void getPercentage(){
        inputMarks();
        cout<<"Percentage :"<<((this->sub1 + this->sub2 + this->sub3)/3)<<endl ;
        this->percentage = ((this->sub1 + this->sub2 + this->sub3)/3);
    }
    void printstudent(){
        cout<<"Name : "<<this->name;
        cout<<"Roll No. : "<<this->roll;
        cout<<"Gender : "<<this->gender;
        cout<<"Percentage : "<<this->percentage;
    }

};

    int menu(){
        int choice;
        cout<<"Enter Choice : "<<endl;
        cout<<" 0 . Exit"<<endl;
        cout<<" 1 . Accept data "<<endl;
        cout<<" 2 . Print Student Data"<<endl;
        cout<<" 3 . Search Student "<<endl;
        cout<<" 4 . Sort Students "<<endl;
        cin>>choice;
        if(choice ==0){
            cout<<"Thanks for using our app!!"<<endl;
        }
        return choice;
        
    }

    int searchRecord(Student ptr[]){
        int roll;
        cout<<"Enter Roll Number :";
        cin>>roll;

        for(int i=0; i<5; i++){
            if(ptr[i].getRoll() == roll  ){
                return i;
            }
        }
        return -1;
    }

    void sortRecords(Student ptr[], int index){
        for(int i=0; i<=index-1; i++){
            for(int j=i+1; j<=index; j++){
                if(ptr[i].getRoll() > ptr[j].getRoll()){
                    //swap
                    Student temp = ptr[i];
                    ptr[i] = ptr[j];
                    ptr[j]=  temp;
                    
                }
            }
        }
        cout<<"done"<<endl;
    }

int main(){
    Student* ptr = new Student[5];
    int i=-1;
    int Choice = menu();

    while((Choice)!= 0){

        switch(Choice){
            case 1:
                i++;
                if(i>5){
                    cout<<"The Catolog is Full"<<endl;
                     delete []ptr;
                    return 0;
                }
                ptr[i].setname();
                ptr[i].setgender();
                ptr[i].setRoll1();
                ptr[i].getPercentage();
                break;
            case 2:
                int index;
                cout<<"Enter Index : ";
                cin>>index; 
                if(index >=5){
                    cout<<"Wrong Index";
                    break;
                }
                ptr[index].printstudent();
                break;
            case 3: 
                int ans;
                ans = searchRecord(ptr);
                cout<<"Student is At Index : "<<ans;
                break;

            case 4: 
                sortRecords(ptr, i);
                cout<<"Record Sorted"<<endl;
                break;
            
            default:   
                cout<<"Invalid choice !!!";
                break;
            
        }



        Choice = menu();
    }
    
    delete[] ptr;

    return 0;

}