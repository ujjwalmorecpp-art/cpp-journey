#include<iostream>
using namespace std;

int main(){
int nums[5];

cout<<"ENTER the 5 number: "<<endl;            // user give input 
for(int i = 0; i<5; i++)
cin>>nums[i];


cout<<"You entered: "<<endl;                // user will get the output that he given the input 
for(int i = 0; i<5; i++){

    cout<<nums[i]<<endl;
}
    return 0;
}