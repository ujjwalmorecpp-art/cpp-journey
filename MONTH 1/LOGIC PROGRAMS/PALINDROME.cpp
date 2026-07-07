#include<iostream>
using namespace std;

int main (){

    int num;
    int digit;
    int answer = 0;

    cout<<"ENTER THE NUMBER: ";
    cin>>num;

int orignal = num;

    while(num>0){

    digit = num % 10;

    answer = answer * 10 + digit;

    num = num / 10; 

    }

if(answer == orignal ){

    cout<<"The number is palindrome";
}

else{

    cout<<"The number is not a palindrome";
}
    return 0;
}