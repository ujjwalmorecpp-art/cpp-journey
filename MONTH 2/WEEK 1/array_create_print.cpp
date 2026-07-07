#include<iostream>
using namespace std;

int main(){

    int arr[5];
    int size = 5;

    //Take a input 
    cout<<"Enter " << size << " numbers: "<<endl;
    for (int i = 0; i<size; i++){
        cout << "Element "<< i <<" = ";
        cin >> arr[i];
    }
cout<<endl;

    cout<<"Your array : ";
    for(int i = 0; i < size; i++){

        cout<<arr[i]<<" ";
    }   
    
cout<<endl;

    cout<<"With index : "<<endl;

    for(int i = 0; i<size; i++){

        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }


    return 0;
}