#include<iostream>
using namespace std;

int add(int a , int b){
    return a+b;
}

int main(){
    int a =10;
    int b=20;

    int ans  = add(a,b);
    cout<<"additon is : "<<ans;
    return 0;
}