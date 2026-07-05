#include<iostream>
using namespace std;

int main(){

    int numberone;
    int numbertwo;

cout<<"Enter the first number: ";
cin>>numberone; 

cout<<"Enter the second number: ";
cin>>numbertwo;

if(numberone > numbertwo ){

    cout<<numberone<<" is greater then "<<numbertwo<<endl;
}
else if (numberone < numbertwo){

    cout<<numbertwo<<" is greater then "<<numberone<<endl;
}

else{

    cout<<"Both numbers are equl to each other."<<endl;
}

    return 0;
}