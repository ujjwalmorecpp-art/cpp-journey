#include<iostream>
using namespace std;

int ispal(int a){

int digit;
int pal =0;

while(a>0){

    digit = a%10;
    pal = pal * 10 + digit;
    a = a/10;
}
return pal;
}

int main(){

    int a;
    cin>>a;
  int temp = a;

  if(ispal(a)== temp){

    cout<<"The number is plandrome";
  }
  else {

    cout<<"The number is not a plandrome";
  }


    return 0;
}