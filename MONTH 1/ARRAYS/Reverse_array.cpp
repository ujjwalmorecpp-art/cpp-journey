#include<iostream>
using namespace std;

int main(){

int nums[5];

cout<<"Enter the number: "<<endl;
for(int i = 0; i < 5; i++){
    cin>>nums[i];
}

int start = 0;
int end = 4;

while(start < end){

    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp; 
    start++;
    end--;
}

cout <<"Reverse array : "<<endl;
for(int i = 0; i < 5; i++){
    cout<<nums[i]<<endl;
}

    return 0;
}