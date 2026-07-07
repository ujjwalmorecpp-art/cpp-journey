#include<iostream>
using namespace std;
int main(){

    //Fixed size array 
    int arr1[5]={10,20,30,40,50};

    //partily filled
    int arr2[5]={1,2,3};
    // remaning -> automatically 0!

    //empty array   
    int arr3[5]={0};
    //all elements = 0!

    //print arr1
    cout<<"Array 1 = ";
    for (int i = 0;i<5; i++){

        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    //print arr2 
    cout<<"Array 2 = ";
    for(int i =0;i<5;i++){

        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    //print arr3
    cout<<"Array 3 = ";
    for (int i = 0; i<5; i++){

        cout<<arr3[i]<<" ";
    }

    return 0;
}