#include<iostream>
using namespace std;

int main(){

    int num;
    int digit;
    int rev = 0;

    cout<<"Enter the number: ";
    cin>>num;
    int orignal = num;

    while(num>0){

        digit = num % 10;
        rev = rev*10 + digit; 
        num = num / 10;

    }

    if(rev == orignal ){

        cout<<"the number is palindrome ";
    }

    else{

    cout<<"The number is not a palindrome ";
    cout<<"The reverse of number is: "<<rev;
    }

    return 0;
}