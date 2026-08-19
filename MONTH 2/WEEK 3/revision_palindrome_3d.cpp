#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;

    int temp =num;
    int digit;
    int rev =0;
    while(num>0){

        digit = num%10;
        rev = rev*10 +digit;
        num = num /10;

    }

    if(rev == temp){

        cout<<"The number is plandrome.";
    }
   else{

        cout<<"The number is not plandrome.";
    }


    return 0;
}