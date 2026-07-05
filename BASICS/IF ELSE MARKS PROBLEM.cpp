#include <iostream>

using namespace std;

int main(){

    int num;

    cout<<"What is your marks :";
    cin>>num;

    if(num>=90){

        cout<<"Your grade is A";

    }

    else if(num >=75){


    cout<<"Your grade is B";
    }

    else if(num>=50){

cout <<"Your grade is C";

    }

    else {

        cout<<"Fail";
    }


    return 0;
}