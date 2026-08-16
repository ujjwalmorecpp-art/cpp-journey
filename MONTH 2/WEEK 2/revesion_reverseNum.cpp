#include<iostream>
using namespace std;

int reverse(int a ){

    int rev = 0;
    int digit;

    while(a>0){
        digit = a %10;
        rev = rev*10 + digit;
        a = a / 10;
    }
    return rev;
}

int main(){

    int a;
    cin>>a;

    cout<<reverse(a);


    return 0;
}

