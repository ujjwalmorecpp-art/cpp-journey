#include<iostream>
using namespace std;

int main(){

int arr[5];
    int size = 5;

    cout<<"Enter the value : "<<endl;
    for(int i = 0;i<size; i++){

        cin>>arr[i];
    }

    //forward transwerel 

    cout<<"Forward : ";
    for(int i = 0; i<size; i++){

        cout<<arr[i]<<" ";
    }
cout<<endl;
    //backward

    cout<<"Backward : ";
    for(int i = size-1;i>=0; i--){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
//print even index only!!

cout<<"Even index : ";
for(int i = 0; i<size;i+=2){

cout<<arr[i]<<" ";
}

    return 0;
}