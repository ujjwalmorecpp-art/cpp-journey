#include<iostream>
using namespace std;

int digitSum(int a){

    int digit;
    int sum =0;

    while(a>0){

        digit = a % 10;
        sum = sum + digit;
        a = a/10;
    }
    return sum;
}


int main(){

    int a;
    cin>>a;

    cout<<digitSum(a);

    return 0;

}