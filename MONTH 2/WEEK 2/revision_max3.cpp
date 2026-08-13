#include<iostream>
using namespace std;

int max2(int a, int b){

    if(a<b){

        return b;
    }
    else{
        return a;
    }
}

int max3(int a, int b, int c){

    int winner = max2(a,b);

    if(winner>c){

        return winner;
    }
    else{

        return c;
    }
}

int main(){

    int a,b,c;

    cin>>a>>b>>c;

    cout<<max3(a,b,c);


    return 0;
}
