#include<iostream>
using namespace std;
int main(){

    int num;
    int digit;
    int amg = 0;

    cout<<"Enter the number: ";
    cin>>num;

    int temp = num;

    while(num>0){

        digit = num%10;
        amg = amg + (digit * digit * digit );
        num = num/10;

    }

    if(temp == amg){

        cout<<"The number is Armstrong.";
    }
    else{

        cout<<"The number is not Armstrong.";
    }

    return 0;
}