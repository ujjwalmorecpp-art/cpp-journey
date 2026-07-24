#include<iostream>
using namespace std;
int main(){

    int size;
    cout<<"How many numbers up to 100 you can enter : ";
    cin>>size;
    
    int arr[100];
//input 

    for(int i = 0; i<size; i++){

        cin>>arr[i];
    }

    cout<<"forward : ";
    for(int i = 0;i < size; i++){

        cout<<arr[i]<<" ";
    }
cout<<endl;

cout<<"backward : ";
for(int i = size-1;i>=0;i--){

    cout<<arr[i]<<" ";
}

    return 0;
}