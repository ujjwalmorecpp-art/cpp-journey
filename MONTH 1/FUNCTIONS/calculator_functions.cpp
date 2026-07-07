#include<iostream>
using namespace std;

    int add(int a, int b ){

        return a+b;
    }

    int sub(int a, int b){

        return a-b;
    }

    int mult(int a, int b){

        return a*b;
    }

    float div(float a, float b){

        if(b == 0){

            cout<<"Error! Cannot divide by zero"<<endl;

            return 0;
        }
        return a/b;
    }
int main(){

float num1 , num2;
char op;

cout<<"Enter the first number: ";
cin>>num1;

cout<<"Rnter the opprator (+,-,*,/): ";
cin>>op;

cout<<"Enter the second number: ";
cin>>num2;


if(op == '+'){

    cout<<"Result = "<<add(num1,num2);
}

else if (op == '-'){

    cout<<"Result = "<<sub(num1,num2);
}

else if (op == '*'){

    cout<<"Result = "<<mult(num1, num2);
}
else if (op =='/'){

    cout<<"Result = "<<div(num1, num2);
}
else{

    cout<<"The oprator is INCORRECT ";
}

   return 0;
}