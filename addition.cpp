#include<iostream>
using namespace std;

int add(int a , int b){
    return a+b;
}

int main(){
    int a, b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int ans  = add(a,b);
    cout<<"additon is : "<<ans;
    return 0;
}