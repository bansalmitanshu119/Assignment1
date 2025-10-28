#include <iostream>
using namespace std;

void matrix_Multiplication(int matrix1[][10],int matrix2[][10],int a,int b, int c,int d){
    
    int ans[10][10];

    for (int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            ans[i][j]=0;
            for(int k=0;k<b;k++){
                ans[i][j]+=matrix1[i][k]*matrix2[k][j];
            }

        }
    }
    cout<<"The Product is: "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            cout<<ans[i][j]<<"   ";
        }
        cout<<endl;
    }

}

int main(){
    int a,b,c,d;
    int matrix1[10][10], matrix2[10][10];
    cout<< "Enter size of the matrix1 (row x column)"<<endl;cin>>a;cin>>b;
    cout<< "Enter size of the matrix2 (row x column)"<<endl;cin>>c;cin>>d;

    if(b!=c){
        cout<<"These 2 matrices can not be multiplied. "<<endl;
    }
    else{
    cout << "Enter the elements for matrix1 row-wise (row by row, left to right):" << endl;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements for matri2 row-wise (row by row, left to right):" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cin >> matrix2[i][j];
        }
    }
    matrix_Multiplication(matrix1,matrix2,a,b,c,d);
    }
    return 0;
}