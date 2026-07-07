#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int orignal = num;
    int answer = 0;
    int digit;

    while(num > 0){

        digit = num % 10;
        answer = answer + (digit * digit * digit);
        num = num /10;

    }

    if (orignal == answer )
    {
        cout<<"the number is amstrong ";

    }

    else{

        cout<<"the  number is not an amstrong";
    }
    
   

    return 0;
}