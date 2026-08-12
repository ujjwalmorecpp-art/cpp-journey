#include<iostream>
using namespace std;



int add (int a,int b){

    return a+b;
}

int sub (int a,int b){

    return a-b;
}

int multi(int a, int b){

    return a*b;
}

float divide(float a , float b){

    return a/b;
}

int main(){
    char op;
    int a,b;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;

    cout<<"Enter the second number:";
    cin>>b;


    if( op =='+'){

        cout<<"The addition of two numbers is = "<<add(a,b);
    }
    else if (op == '-'){

        cout<<"The subtraction of two numbers is = "<<sub(a,b);
    }
    else if(op == '*'){

        cout<<"The multiplication of two numbers is = "<<multi(a,b);
    }
    else if(op == '/'){

        cout<<"The division of two numbers is = "<<divide(a,b);
    }
    else{
        cout<<"The operator is wrong !! ";
    }
    


    return 0;
}
