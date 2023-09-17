#include <iostream>
using namespace std;

class Matrix
{
private:
    int row;
    int col;
    int **arr;
    public :


    Matrix()
    {
        this->row = 0;
        this->col = 0;
         //arr = new int *[row];
    }
    Matrix(int row, int col)
    {
        this->row = row;
        this->col = col;
        arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
    }
      void acceptdata()
    {
        //Matrix result(row ,col);
        cout<< " enter the element"<<endl;
        for(int i=0;i<row;i++)
        {

            for(int j=0;j<col;j++)
            {
                
                cin>>this->arr[i][j];
            }
            cout<<endl;
        }

    }


    Matrix operator+( Matrix & other)
    {
        Matrix result(row ,col);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                result.arr[i][j] = this->arr[i][j] + other.arr[i][j];
            }
        }
        return result;

    }
      Matrix operator-( Matrix & other)
    {
        Matrix result(row ,col);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                result.arr[i][j] = this->arr[i][j] - other.arr[i][j];
            }
        }
        return result;

    }

     Matrix operator*( Matrix & other)
    {
        Matrix result(row ,col);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                for(int k=0;k<col;k++)
                result.arr[i][j] += this->arr[i][k] * other.arr[k][j];
            }
        }
        return result;

    }

    void printdata()
    {
         cout<<"print data"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                
                cout<<this->arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
};

enum Emenu
{
    EXIT,
    ACCEPT,
    PRINT
};

int menu()
{
    cout << "";
    int choice;
    cin >> choice;

    return Emenu(choice);
}

int main()
{
    Matrix mat1(2, 2);
    Matrix mat2(2, 2);
    mat1.acceptdata();
    mat2.acceptdata();

    Matrix m1 = mat1 + mat2;
    Matrix m2 = mat1 - mat2;
    Matrix m3 = mat1 * mat2;
    

    m1.printdata();
     cout<<endl;
    m2.printdata();
    cout<<endl;
    m3.printdata();
    cout<<endl;

}