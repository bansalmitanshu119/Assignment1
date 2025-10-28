#include <iostream>
using namespace std;

void checkduplicate(int arr[],int n){
    int unique[100];
    int k=0;
    
    for(int i=0;i<n;i++){
        bool is_Duplicate=false;
        for(int j=0;j<k;j++){
            if (arr[i]==unique[j]){
                is_Duplicate=true;
                break;
            }
        }

        if (is_Duplicate==false){
            unique[k] = arr[i];
            k++;
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++){
        cout << unique[i] << " ";
    }
    cout << endl;
}

int main(){
    int n,arr[100];
    cout<<"Enter size of arr: "<<endl;cin>>n;
    cout<<"Enter the elements of arr: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    checkduplicate(arr,n);
    return 0;
}