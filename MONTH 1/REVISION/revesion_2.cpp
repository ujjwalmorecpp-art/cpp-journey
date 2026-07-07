#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number i will tell wether the munber is positive negative even odd and  which grade you get: ";
    cin>>num;
 if (num>0){

    cout<<"The number is positive "<<endl;
 }
else if(num<0){

    cout<<"The number is negative "<<endl;
}
else{

    cout<<"The number is zero "<<endl;
}
    if(num % 2 == 0){

        cout<<"The number is even "<<endl;
    }
    else {

        cout<<"The number is odd "<<endl;
    }


    if(num>90){

        cout<<"You got A grade "<<endl;
    }
    else if (num>75){

        cout<<"You got B grade "<<endl;
    }
    else if(num>50){

        cout<<"You got c grade"<<endl;
    }
else {
    cout<<"Sorry but you are fail now take a drop and prepare well "<<endl;
}
    return 0;
}