#include <iostream>
using namespace std;

int main(){

int num1;
int num2;
char op;

cout<<"Enter the number 1: ";
cin>>num1;

cout<<"Enter the oprator (+,-,x,/): ";
cin>>op;

cout<<"Enter the number 2: ";
cin>>num2;

if( op == '+' ){

    cout<<"Result = "<< num1 + num2 <<endl;
}

else if (op == '-' ){

    cout<<"Result = "<< num1 - num2 <<endl;
}

else if (op == '*'){

    cout<<"Result = "<< num1 * num2 <<endl;
}

else if (op == '/'){

    cout<<"Result = "<< num1 / num2 <<endl;
}

else{

    cout<<"The oprator is incorect"<<endl;
}
    return 0;
}