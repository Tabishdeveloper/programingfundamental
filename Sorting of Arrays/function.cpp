#include<iostream>
using namespace std;
void display (int row, int column, int matrix[][100]);

void multiplication (int row1, int column1, int column2, int matrix1[][100], int matrix2[][100], int matrix3[][100]);

void input (int row, int column, int matrix[][100]);

	
int main(){
	
	int row_matrix1=0;
	
	int column_matrix1=0;
	
	int row_matrix2=0;
	
	int column_matrix2=0;
	
	int counter=0;
	
	int counter2=0;
	
	int i, j, k=0;
	
	int sum=0;
	
	cout<<"Please enter the rows of first matrix"<<endl;
	cin>>row_matrix1;
	cout<<endl;
	
	cout<<"Please enter the columns of first matrix"<<endl;
	cin>>column_matrix1;
	cout<<endl;
	
	cout<<"Please enter the rows of second matrix "<<endl;
	cin>>row_matrix2;
	cout<<endl;
	
	cout<<"Please enter the columns of second matrix"<<endl;
	cin>>column_matrix2;
	cout<<endl;
	
	int matrix1 [row_matrix1][100];
	
	int matrix2 [row_matrix2][100];
	
	int matrix3 [row_matrix1][100];

    input (row_matrix1, column_matrix1, matrix1);
	
	cout<<"Matrix 1 is = "<<endl<<endl;

	
	display(row_matrix1, column_matrix1, matrix1);


	cout<<endl;
	
	input (row_matrix2, column_matrix2, matrix2);
		
		cout<<"Matrix 2 is = "<<endl<<endl;
		
		display (row_matrix2, column_matrix2, matrix2);
	
	
		if (column_matrix1==row_matrix2){
			
			cout<<"Multiplying both matrixes, we get "<<endl<<endl;
			
		 multiplication(row_matrix1, column_matrix1, column_matrix2, matrix1, matrix2, matrix3);
		 
		 display (row_matrix1, column_matrix2, matrix3);
		 
		 
		}
		
		else {
			
			cout<<"The columns of matrix1 do not match the rows of matrix2, hence multiplication is not possible";
		}
		
		
	}


	




