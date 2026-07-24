#include<iostream>
using namespace std; 

int main (){
    int secret;
    int guess;
    int tries = 0;

    while(true){
        secret = 35;
        tries++;

     cout<<"Guess the number : "<<endl;
     cin>>guess;

        if(guess < secret){

            cout<<"higher"<<endl;
        }
        else if(guess > secret){

            cout<<"lower"<<endl;
        }
        else{

            cout<<"you are correct !! You took "<<tries<<" tries";break;
           
        }
        
    }

    return 0;
}