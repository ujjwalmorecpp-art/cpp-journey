#include<iostream>
using namespace std;
int main(){

    int num;
    int digit;
    int rev = 0;

    cout<<"Enter the number :";
    cin>>num;
    int temp = num;

    while(num>0){

        digit = num%10;
        rev = rev*10 + digit;
        num = num /10; 
    }

    if(temp == rev){

        cout<<"The number is palandrome. ";
    }
    else{

        cout<<"The number is not palandrome. ";
    }


    return 0;
}