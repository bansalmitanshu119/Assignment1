#include <iostream>
using namespace std;

void sum(int matrix[][10],int a,int b){
    int rowsum,colsum;
    cout<<"Entered Matrix is :"<<endl;
    for(int i=0;i<a;i++){
        
        for(int j=0;j<b;j++){
            cout<<matrix[i][j]<<"    ";
        }
        cout<<endl;
    }

    cout<<endl;

//sum of rows
    for(int i=0;i<a;i++){
        rowsum=0;
        for(int j=0;j<b;j++){
            rowsum+=matrix[i][j];
            
        }
        cout<<"Row "<<(i+1)<<" Sum= "<<rowsum<<endl;
    }
    
    cout<<endl;

//sum of columns
    for(int i=0;i<a;i++){
        colsum=0;
        for(int j=0;j<b;j++){
            colsum+=matrix[j][i];
            
        }
        cout<<"Column "<<(i+1)<<" Sum= "<<colsum<<endl;
    }
    
    cout<<endl;
    
}

int main(){
    int a,b;
    int matrix[10][10];
    cout<< "Enter size of the matrix (row x column)"<<endl;cin>>a;cin>>b;
    cout<<"Enter the elements of the matrix row by row: "<<endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> matrix[i][j];
        }
    }
    
    sum(matrix,a,b);

}