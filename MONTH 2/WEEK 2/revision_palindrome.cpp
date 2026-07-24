#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int digit;
    int answer = 0;
    int temp = num;

    while(num > 0){
        digit = num % 10;
        answer = answer * 10 + digit;
        num = num / 10;
    }

    if(answer == temp){
        cout << "The number is Palindrome";
    }
    else{
        cout << "The number is NOT Palindrome";
    }

    return 0;
}