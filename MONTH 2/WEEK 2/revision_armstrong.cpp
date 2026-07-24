#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int temp = num;
    int digit;
    int amg = 0;

    while(num > 0){
        digit = num % 10;
        amg = amg + (digit * digit * digit);
        num = num / 10;
    }

    if(amg == temp){
        cout << "The number is Armstrong";
    }
    else{
        cout << "The number is NOT Armstrong";
    }

    return 0;
}