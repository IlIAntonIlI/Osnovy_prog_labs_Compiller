#include <iostream>
#include <ctime>
using namespace std;
int** Create_Matrix(int, int);                  // Function for creating and filling dynamic Matrix with numbers
void delete_Matrix(int**,int);                  // Function for deleting dynamic Matrix
void Output_Matrix(int** ,int ,int );           // Function to display the matrix on the screen
int sum_of_elements_row(int**,int ,int );       // Function to find the amount of numbers in row with number "i"
int sum_of_elements_col(int**,int ,int );       // Function to find the amount of numbers in collumn with number "i"
int sum_of_Matrix_elements(int**,int,int);      // Function to find the amount of all numbers in Matrix
int main()
{
    int col_num,                                // Number of columns
        row_num;                                // Number of rows
    cout<<"Enter number of rows in Matrix: ";
    cin>>row_num;
    cout<<"Enter number of columns in Matrix: ";
    cin>>col_num;
    if((col_num>0)&&(row_num>0))                // Checking the data entered by the user for correctness
    {
        srand(time(NULL));
        int **Matrix;                           // Dynamic Matrix
        Matrix=Create_Matrix(row_num,col_num);
        Output_Matrix(Matrix,row_num,col_num);

        for (int i=0; i<row_num;i++)
        {
            Matrix[i][col_num]=sum_of_elements_row(Matrix,i,col_num);
        }
         for (int i=0; i<col_num;i++)
        {
            Matrix[row_num][i]=sum_of_elements_col(Matrix,row_num,i);
        }
        Matrix[row_num][col_num]=sum_of_Matrix_elements(Matrix,row_num,col_num);

        Output_Matrix(Matrix,row_num+1,col_num+1);
        delete_Matrix(Matrix,row_num);
    }
    else
    {
        cout<<"Number of rows and columns must be >0";
    }
}

int** Create_Matrix(int row, int col)
{
    row+=1;                             // row+=1 because in conclusion we need Matrix with started number of rows+1
    col+=1;                             // col+=1 because in conclusion we need Matrix with started number of columns+1
    int **p_Matrix= new int* [row];
    for (int i=0; i<row;i++)
    {
        p_Matrix[i]= new int [col];
    }

    for (int i=0; i<row-1;i++)
    {
        for(int j=0;j<col-1;j++)
        {
            p_Matrix[i][j]=rand()%10+1;
        }

    }
    return p_Matrix;
}


void delete_Matrix(int **Matrix, int row)
{
    row+=1;
    for (int i=0; i<row;i++)
    {
        delete[] Matrix[i];
    }
    delete[] Matrix;
}


void Output_Matrix(int **Matrix, int row, int col )
{
    cout<< "Matrix: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            printf("%4.d",Matrix[i][j]);
        }
        cout<<endl<<endl;
    }
    cout<<endl<<endl;
}

int sum_of_elements_row(int **Matrix, int number_of_row, int col)
{
    int sum=0;
    for (int j=0;j<col;j++)
    {

        sum=sum+Matrix[number_of_row][j];
    }
    return sum;
}

int sum_of_elements_col(int **Matrix, int row, int number_of_col)
{
    int sum=0;
    for (int j=0;j<row;j++)
    {
        sum=sum+Matrix[j][number_of_col];
    }
    return sum;
}

int sum_of_Matrix_elements(int **Matrix,int row, int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        sum=sum+Matrix[i][col];
    }
    return sum;
}
