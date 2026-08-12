#include<iostream>
using namespace std;

int ifpower(int base, int power){
int result = 1;
for(int i = 1; i<=power;i++){

    result = result * base;
}

return result;
}

int main(){
    int base,power;
    cin>>base>>power;

    cout<<ifpower(base,power);

    return 0;
}