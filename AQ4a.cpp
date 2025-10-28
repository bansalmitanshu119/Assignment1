#include <iostream>
using namespace std;

//stroring last element of original array at thr first position of new array 
void reverse(int arr[],int n){
    int reversed_array[100];
    int j=0;
    for (int i=n-1;i>=0;i--){
        reversed_array[j]=arr[i];
        j++;
    }
    cout<<"Reversed array is :"<<endl;
    for (int i=0;i<n;i++){
        cout<<reversed_array[i]<<endl;
    }
    
}
int main(){
    int n,arr[100];
    cout<<"Enter the size of array: "<<endl;cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
}