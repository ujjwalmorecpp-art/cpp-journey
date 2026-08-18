#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    int m[100][100], t[100][100];

    for(int i =0; i<a; i++){
        for(int j = 0; j<b;j++){
            cin>>m[i][j];
        }
    }

    for (int i =0; i<a; i++){
        for(int j =0;j<b; j++){

            t[j][i] = m[i][j];
        }
    }

    for(int i = 0; i<b; i++){
        for(int j =0; j<a; j++){

            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}