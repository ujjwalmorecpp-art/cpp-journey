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

    for(int i = 0; i<a; i++){

        for(int j =0; j<b; j++){

            cout<<matrix[i][j];
        }
        cout<<endl;
    }



    return 0;
}