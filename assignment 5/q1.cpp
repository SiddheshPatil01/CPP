#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    int inchs;

    public:
        Distance(){
            this->feet=0;
            this->inchs=0;
        }
        Distance(int feet, int inchs){
            this->feet=feet;
            this->inchs=inchs;
        }
        Distance operator+(Distance &other){
            Distance d3;
            d3.feet = this->feet + other.feet;
            d3.inchs = this->inchs + other.inchs;
            return d3;
        }
        Distance operator++(int){
            this->inchs++;
        }
        

        friend void operator<<(ostream &out, Distance &other );
        friend void operator>>(istream &in, Distance &other );
        friend bool operator==(Distance &d1, Distance &d2);
};

void operator<<(ostream &out, Distance &other ){
    cout<<other.feet<<" feet "<<other.inchs<<" inchs "<<endl;
}

void operator>>(istream &in, Distance &other){
    
    cout<<"Enter Feet: ";
    cin>>other.feet;
    cout<<"Enter inchs";
    cin>>other.inchs;
}

bool operator==(Distance &d1, Distance &d2){
    if(d1.feet == d2.feet && d1.inchs==d2.inchs){
        return true;
    }else{
        return false;
    }
}

int main(){
    Distance d1(1,2);
    Distance d2(1,2);
    Distance d3 = d1 + d2;
    cout<<d3;
    if(d1 == d2){
        cout<<"Objects area equal"<<endl;
    }else{
        cout<<"Not equal"<<endl;
    }
    return 0;
}