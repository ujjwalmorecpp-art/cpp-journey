#include<iostream>
using namespace std;
int main(){

       int num;
       long long fact = 1;

       cout<<"Entrt the number: ";
       cin>>num;

       for (int i =1; i<=num;i++){

              fact = fact*i;
       }

       cout<<"Factoraial = "<<fact;


 return 0;
}