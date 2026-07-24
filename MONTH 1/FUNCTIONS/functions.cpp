#include<iostream>
using namespace std;

void sayHello(){

    cout<<"heyyy i am a Function "<<endl;     // TYPE 1 -> No Input , No Output. 
}

void myName(string name){
                                    
    cout<<name<<endl;                            // TYPE 2 -> Has Input , No Output.
}

int addNumbers(int a,int b){
                                             // TYPE 3 -> Has Input , Has Output.
    return a+b;
}

int main(){

sayHello();

myName("Ujjwal");

int result = addNumbers(9,5);

cout<<"Sum = " <<result;

    return 0;
}