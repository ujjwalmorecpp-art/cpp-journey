#include<iostream>
using namespace std;

int main(){
int num;
long long fact = 1;

cout<<"Enter the number whose want factorial: ";
cin>>num;

for(int i=1; i<= num; i++){

    fact = fact * i;
}

cout<<"Factoral: "<<fact<<endl;


    return 0;
}