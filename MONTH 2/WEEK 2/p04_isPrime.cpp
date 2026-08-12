#include<iostream>
using namespace std;

int isprime(int a){

    if(a<2){
        return 0;
    }
    for(int i = 2; i<a; i++){
        if(a%i == 0){
            return 0;
        }
       
    }
return 1;
}

int main(){

    int a;
    cout<<" Enter the numbeer: ";
    cin>>a;

cout<<isprime(a);


    return 0;
}