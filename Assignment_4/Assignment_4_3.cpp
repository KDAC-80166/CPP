// Q3. Write a Matrix class. Allocate memory dynamically in parameterized constructor. Also write
// parameter-less constructor. Write accept() and print() functions.
// Also provide add(), subtract(), multiply() and transpose() function.
#include <iostream>
using namespace std;
class Matrix
{

private:
    int **arr;
    int row;
    int col;

public:
    Matrix(int r, int c)
    {

        this->row = r;
        this->col = c;

        this->arr = new int *[r];
        for (int i = 0; i < r; i++)
        {
            arr[i] = new int[col];
        }
    }
    Matrix()
    {
    }
    void accept()
    {
        for (int r = 0; r < this->row; r++)
        {
            for (int c = 0; c < this->col; c++)
            {
                cout << "Enter the value of [" << r << "][" << c << "] :";
                cin >> arr[r][c];
            }
        }
    }
    void print()
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
            
                cout << arr[r][c] << " ";
            }
            cout << endl;
        }
    }

    void AddMatrix(Matrix *m1, Matrix *m2)

    {
  
       cout << "Addition of Matrix" <<" ";
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
             this->arr[r][c] = m1->arr[r][c] + m2->arr[r][c];
              
            }
            cout << endl;
        }
    }
    void SubbMatrix(Matrix *m1, Matrix *m2)
    {

        cout << "Subtraction  of Matrix" <<" ";
        
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {

             this->arr[r][c] = m1->arr[r][c] - m2->arr[r][c]; 
           
            }
            cout << endl;
        }
    }
    void MultiplyMatrix(Matrix *m1, Matrix *m2)
    {

        cout << "Multiply  of Matrix" << " ";
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                this->arr[r][c]=0;
                for(int k=0;k<col;k++)
                {
                this->arr[r][c] += m1->arr[r][k] * m2->arr[k][c];
                //cout << this->arr[r][c] << " ";
                }
            }
            cout << endl;
        }
    }

    

    void transpose(Matrix *m1){
        cout<<"Transpose of Matrix:"<<endl;
        for(int r=0;r<row;r++){
            for(int c=0;c<col;c++){
                this->arr[r][c]=m1->arr[c][r];
            }
        }
    }


    ~Matrix()
    {
        for (int i = 0; i < row; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
};

int main()
{
    int row;
    int col;
cout<<"Enter rows"<<endl;
cin>>row;
cout<<"Enter col"<<endl;
cin>>col;
    Matrix m1(row,col);
   Matrix m2(row,col);

    m1.accept();
    m1.print();

    m2.accept();
    m2.print();

   Matrix m3(2,2);

   m3.AddMatrix(&m1,&m2);
    m3.print();

  m3.SubbMatrix(&m1, &m2);
  m3.print();

 m3.MultiplyMatrix(&m1, &m2);
 m3.print();
   

m3.transpose(&m1);
 m3.print();
 m3.transpose(&m2);
 m3.print();
    return 0;
}