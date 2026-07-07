#include<iostream>
using namespace std;

int main(){

    int num;
    long long answer = 1;

    cout<<"Enter the number: ";
    cin>>num;


    for(int i =1; num>=i; i++){

  answer = answer * i;


    }

    cout<<answer;



    return 0;
}