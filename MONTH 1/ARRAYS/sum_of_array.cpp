#include<iostream>
using namespace std;

int main(){

    int nums[5];

    cout<<"Enter the 5 numbers of whose you want the sum: "<<endl; // user input 
    for(int i = 0; i < 5; i++){
        cin>>nums[i];
    }

int sum = 0;

for(int i = 0; i < 5; i++){            // sum of array !! 

        sum = sum + nums[i];
}

cout<<"The sum of array is: "<<sum<<endl;    // output 
    return 0;
}
