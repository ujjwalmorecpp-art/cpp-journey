#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    int matrix[a][b];

    for(int i =0; i<a; i++){

        for(int j =0; j<b; j++){

            cin>>matrix[i][j];
        }
    }

    for(int i =0; i<a; i++){
int sum =0;
        for(int j =0; j<b; j++){
            
            sum = sum + matrix[i][j];

            cout<<matrix[i][j]<<" ";
        }
        cout<<" = "<<sum;
        cout<<endl;
    }

     return 0;
}