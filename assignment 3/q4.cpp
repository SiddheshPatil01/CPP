#include<iostream>
using namespace std;

class Matrix{
    private: 
        int row , col;
    
    public:
        int **ptr;
        Matrix(int row, int col){
            this->col = col;
            this->row = row;

            ptr = new int*[col];
            for(int i=0; i<this->col; i++){
                ptr[i] = new int[row];
            }
        }
        Matrix(){
            this->col=0;
            this->row=0;
        }

        void accept(){
            int element;
            cout<<"ENTER ELEMENTS : "<<endl;
            for(int i=0; i<row; i++){
                for (int j=0; j<col; j++){ 
                    cin>>element;
                    ptr[i][j]= element;
                   
                }
            }
        }

        int getele(int i, int j){
            return ptr[i][j];
        }

        int getrows(){
            return this->row;
        }

        int getcol(){
            return this->col;
        }
        void setele(int i, int j, int ele){
            this->ptr[i][j] = ele;
        }


        void printrec(){
            cout<<"MATRIX :"<<endl;
            for(int i=0; i<this->row; i++){
                for(int j=0; j<this->col; j++){
                    cout<<ptr[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void add(Matrix m, Matrix n){
            cout<<"The Addition of these Matrices is : "<<endl;
            for(int i=0; i<row; i++){
                for (int j=0; j<col; j++){  
                   cout<< m.getele(i,j)+ n.getele(i,j)<<" ";
                }
                cout<<endl;
            }
        }

        void sub(Matrix m, Matrix n){
            cout<<"The substraction of these Matrices is : "<<endl;
            for(int i=0; i<row; i++){
                for (int j=0; j<col; j++){  
                   cout<< m.getele(i,j) - n.getele(i,j)<<" ";
                }
                cout<<endl;
            }
        }

        void mult(Matrix m, Matrix n){
            for(int i=0;i<this->getrows();i++){
                for(int j=0; j<this->getcol(); j++){
                        this->ptr[i][j]=0;
                    for(int k=0; k<this->getrows(); k++){
                        this->ptr[i][j] += m.getele(i,k)*n.getele(k,j);
                    }
                }
            }
            cout<<"the multiplication of these Matrices is :"<<endl;
            for(int i=0; i<this->getrows(); i++){
                for(int j=0; j<this->getcol(); j++){
                    cout<<this->getele(i,j)<<" ";
                }
                cout<<endl;
            }
        }  
        

        void transpose(){
            for(int i=0; i<this->getrows(); i++){
                for(int j=0; j<this->getcol(); j++){
                    cout<<this->getele(j,i)<<" ";
                }
                cout<<endl;
            }
        }
        
};

int main(){
    Matrix m(2,2);
    Matrix n(2,2);
    int rows = m.getrows();
    int col = n.getcol();
    Matrix ans(rows, col);
    m.accept();
    m.transpose();
    //n.accept(); 
    //ans.mult(m,n); 
    

    return 0;
}