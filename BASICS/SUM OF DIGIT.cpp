#include <iostream>
using namespace std;

int main(){
    int num;
    int sum=0;

    cout<<"Enter the number:";
    cin>>num;

    for(;num>0;)
    {
        int digit = num % 10;

        sum = sum + digit;
        
        num = num / 10;

    }
        cout <<"sum of the number is: "<<sum;
    
    return 0;
}