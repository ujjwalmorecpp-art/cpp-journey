#include<iostream>
using namespace std;

int even(int a){

if(a%2 == 0){

    return 1;
}
else{

    return 0;
}
}

int main(){

    int a;

    cout<<"Enter the number: ";
    cin>>a;

    cout<<even(a);

    return 0;
}