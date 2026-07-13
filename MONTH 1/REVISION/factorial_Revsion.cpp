#include<iostream>
using namespace std;

int main(){

    long long num;
    long long fact=1;

    cout<<"Enter the number: ";
    cin>>num;

    for(int i= 1; i<=num; i++){

        fact = fact *i;
    }

cout<<"The factorial is: "<<fact;

    return 0;
}