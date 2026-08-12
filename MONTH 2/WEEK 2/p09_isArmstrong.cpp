#include<iostream>
using namespace std;

int isarmstrong(int arm){

    int digit;
    int amg = 0;
    int temp = arm;

    while (arm>0){

        digit = arm % 10;
        amg = amg + (digit * digit * digit );
        arm = arm /10;
    }
    if(amg == temp){

        return 1;
    }
    else{
        return 0;
    }

}
int main(){

    int arm;
    cin>>arm;

    if(isarmstrong(arm)== 1){

        cout<<"The number is armstrong.";
    }
    else{
        cout<<"The number is not an armstrong.";
    }
}