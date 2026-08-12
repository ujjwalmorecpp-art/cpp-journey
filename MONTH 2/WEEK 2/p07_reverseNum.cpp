#include<iostream>
using namespace std;

int reversenum(int rev){

    int digit;
    int reverce = 0;

    while(rev>0){

        digit = rev % 10;
        reverce = reverce*10 + digit;
        rev = rev/10;
    }

        return reverce;
}

int main(){

    int rev;

    cin>>rev;

    cout<<reversenum(rev);
}