#include <iostream>
using namespace std;

int main(){

    int num;

    cout <<"Type the number :";
    cin >> num;

    if (num>0){
    cout<<"The number is POSITIVE ";
    }

   else if (num<0){

        cout<<"The number is NEGATVE ";
    }

    else{

        cout <<"The number is ZERO ";
    }

    return 0;
}