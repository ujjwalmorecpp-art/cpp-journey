#include<iostream>
using namespace std;

int main(){

    int nums[5];     //array of 5 number 
//taking input 
    cout<<"Enter the 5 numbe :"<<endl;
    for(int i = 0; i<5; i++){
        cin>>nums[i];
    }
//printing output 
cout<<"You entered: ";
for(int i = 0; i<5; i++){

    cout<<nums[i] <<",";
}
cout<<endl;

    return 0;
}