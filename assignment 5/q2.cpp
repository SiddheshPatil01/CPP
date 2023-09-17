#include<iostream>
using namespace std;

class Stack{
    private :
        int size;
        int i=-1;
        int *a = new int[size];
        
    public:
        Stack(){
            this->size =5;
        }    
        Stack(int size): size(size){

        }
        Stack(Stack &other){
            other.a = this->a;
            other.i = this->i;
        }
        void operator=(Stack &other){
            other.a = this->a;
            other.i = this->i;
        }
        void push(int n){
            i++;
            a[i]=n;
            
        }
        void pop(){
            a[i]=0;
            i--;
        }
        void peek(int n){
            cout<<a[n];
        }
        void isEmpty(){
            if(i==-1){
                cout<<"This stack is empty"<<endl;
            }else{
                cout<<"This stack is not empty"<<endl;
            }
        }
        void isFull(){
            if(i==size-1){
                cout<<"Stack full "<<endl;
            }else{
                cout<<"Stack is not full"<<endl;
            }
        }
        void print(){
            for(int index=0; index<i &&index<this->size; index++){
                cout<<a[index]<<endl;
            }
        }

        ~Stack(){
            delete[]a;
        }

};

int main(){
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.peek(2);
   // s.print();
    return 0;
}