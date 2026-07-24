#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    long long ans = 1;

    for(int i = 1; i <= num; i++){
        ans = ans * i;
    }

    cout << "Factorial is: " << ans;

    return 0;
}