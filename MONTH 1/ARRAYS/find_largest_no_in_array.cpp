#include<iostream>
using namespace std;

int main(){

int nums[5];

cout<<"Enter the 5 numbers whos want the LARGEST number: "<<endl;   //user input !!
for(int i = 0; i<5; i++){
    cin>>nums[i];
}


int largest = nums[0];    //assuming first is the lsrgest.


for(int i = 0; i<5; i++){

    if (nums[i]> largest){          //finding the actual smallest and doing equals to largest !!

        largest = nums[i];
    }
}

cout<<"The largest number is: "<<largest<<endl;

    return 0;
}