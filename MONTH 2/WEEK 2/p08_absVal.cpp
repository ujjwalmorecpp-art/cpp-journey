#include<iostream>
using namespace std;

int absval(int a){

if(a<0){

    return a *-1;

}
else if(a == 0){

    return a;
}
else{
    return a;
}
}

int main(){

    int a;
    cin>>a;

    cout<<absval(a);
}