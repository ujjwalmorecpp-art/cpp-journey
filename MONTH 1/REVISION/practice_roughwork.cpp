#include<iostream>
using namespace std;
int main(){

int num;
int digit;
int ans = 0;

cout<<"Enter the number: ";
cin>>num;

int orignal = num;

    while(num>0){

        digit = num % 10;
        ans = ans + (digit * digit *digit);
        num = num / 10;
    }
         if(ans == orignal){

         cout<<"The number is amstrong ";
         }
else{

    cout<<"The number is not an amstrong ";
    cout<<"The answer is "<<ans;
}
    return 0;
}