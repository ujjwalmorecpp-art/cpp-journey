#include<iostream>
using  namespace std;

int main(){                         //TABLE WITH 3 SKIP 

    int num;

    cout<<"Enter the number whos table you want: "<<endl;     
    cin>>num;

    for (int i = 1; i <= 10; i++){

         if(i%3 == 0) continue;

        cout<<num<<"x"<<i<<"= "<< num*i<<endl;


    
    }

    return 0;
}