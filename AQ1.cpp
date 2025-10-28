//Mitanshu Bansal(1024240088)

#include <iostream>
using namespace std;

int arr[100];
int n;
void create(){
    cout << "Enter number of elements: " <<endl ;
    cin >> n ;
    cout << "Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

void display(){
    cout <<"Array: "<<endl;
    for(int i=0;i<n;i++){
        cout << arr[i]<<endl;
    }
}

void insert(){
    int i,value;
    cout<<"Enter index where element is to be added: "<<endl;
    cin>>i;
    cout<<"Enter value : "<<endl;
    cin>>value;
    //Here i is the index
    for(int j=n;j>i;j--){
        arr[j]=arr[j-1];
    }
    arr[i]=value;
    n++;
}

void deleteElement(){
    int i;
    cout<<"Enter the index to delete: "<<endl ;cin>>i;
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    n--;
}

void linear_search(){
    int value;
    cout<<"Enter the element to search: "<<endl ;cin>>value;
    for(int j=0;j<n;j++){
        if(arr[j]==value){
            cout<<"Element found at index "<<j<<endl;
            return;
        }
    }
    cout<<"Not found"<<endl;
}
int main() {
    int i=0;
    while(i!=6){
        cout << "Press 1. Create"<<endl<<"    2.Display"<<endl<<"    3.Insert"<<endl<<"    4.Delete"<<endl<<"    5.Linear Search"<<endl<<"    6.Exit"<<endl;
        cin>>i;
        if(i==1) create();
        else if(i==2) display();
        else if(i==3) insert();
        else if(i==4) deleteElement();
        else if(i==5) linear_search();
        else cout<<"invalid"<<endl;
    }
    return 0;
}