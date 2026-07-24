#include<iostream>
using namespace std;

int main(){

    int nums[5];
    cout<<"Enter the 5 number: ";

    for(int i =0; i<5; i++){

        cin>>nums[i];
    }

    int largest = nums[0];
    for(int i= 1; i<5; i++){

        if(nums[i]>largest){

            largest = nums[i];
        }
    }

    int sum = 0;

    for (int i =0; i<5; i++){

        sum = sum + nums[i];
    }

    cout<<"The largest number in arry is : "<<largest<<endl;
    cout<<"The sum of nuber is : "<<sum<<endl;

    return 0;
}