#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int temp = num;

    int digit; 
    int rev = 0;

    while(num>0){

        digit = num % 10;
        rev = rev * 10 + digit; 
        num = num / 10;
    }

    if(rev == temp){

        cout<<"The number is palindrome.";
    }
    else {

        cout<<"The number is not palindrome.";
    }

   return 0;

}