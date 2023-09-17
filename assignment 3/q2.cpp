#include<iostream>
using namespace std;

class Time {
    private: 
        int h, m , s;

    public:
        Time(){
            this->h=0;
            this->m=0;
            this->s=0;
        }

        Time (int h, int m, int s):h(h), m(m), s(s){

        }
        void getHour(){
            cout<<"Hour : "<<this->h;
        }
        void getMin(){
            cout<<"Hour : "<<this->m;
        }
        void getSec(){
            cout<<"Hour : "<<this->s;
        }
        void printTime(){
            cout<<this->h<<"Hr :"<< this->m<<"min :"<<this->s<<"Sec"<<endl;

        }
        void setHour(){
            cout<<"Enter Hour : ";
            cin>>this->h;
        }
        void setMin(){
            cout<<"Enter Minutes :";
            cin>>this->m;
        }
        void setSec(){
            cout<<"Enter Seconds :";
            cin>>this->s;
        }


};

int main(){
    Time t;
    // t.setHour();
    // t.setMin();
    // t.setSec();
    // t.printTime();

    Time *ptr = new Time[4];

    for(int i=0; i<4; i++){
    ptr[i].setHour();
    ptr[i].setMin();
    ptr[i].setSec();
    
    }

    ptr[3].printTime();
    return 0;
}