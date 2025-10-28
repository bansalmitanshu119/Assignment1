#include <iostream>
using namespace std;

void transpose(int matrix[][10],int a,int b){
    int transpose[10][10];
    cout<<"Entered Matrix is :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<matrix[i][j]<<"    ";
        }
        cout<<endl;
    
    }
    cout<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    cout<<"Transpose is :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<transpose[i][j]<<"    ";
        }
        cout<<endl;
    }
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
    
    transpose(matrix,a,b);

}