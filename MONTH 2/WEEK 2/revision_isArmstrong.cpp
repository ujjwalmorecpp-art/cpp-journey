#include<iostream>
using namespace std;

int isArmstrong(int a){

    int digit;
    int amg = 0;
    int temp =a;

    while(a>0){

        digit = a % 10;
        amg = amg +(digit * digit * digit);
        a = a/10;
    }
    if(temp == amg){

        return 1;
    }
    else{

        return 0;
    }
}

    int main(){

        int a;
        cin>>a;

        if(isArmstrong(a)==1){

            cout<<"The number is Armstrong.";
        }
        else{
            cout<<"The number is not Armstrong.";
        }



        return 0;
    }