#include<iostream>
using namespace std;
int main(){
    
    int size;

    cout<<"Enter the size (you can take size up to 1 to 50) : ";
    cin>>size;

      int  arr[50];

    cout<<"Enter the number : "<<endl;
    for(int i =0;i<size; i++){

        cin>>arr[i];
    }
cout<<endl;
     int largest = arr[0];
     int smallest = arr[0];

     for(int i =1;i<size; i++){

        if(arr[i]>largest){

            largest = arr[i];
        }
        if(arr[i]<smallest){

            smallest = arr[i];
        }
     }

     cout<<"The largest number of given number is : "<<largest;
     cout<<endl;
     cout<<"The smallest number of given number is : "<<smallest;


    return 0;
}