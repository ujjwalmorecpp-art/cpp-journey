#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


int matrix [n][n];

for(int i =0;i<n;i++){
    for(int j =0; j<n; j++){
        cin>>matrix[i][j];
    }
}
for(int i =0; i<n; i++){
    for(int j =0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"The sum of primary digonal is = ";

int psum = 0;

for(int i=0;i<n;i++){
    psum = psum + matrix[i][i];
}

cout<<psum<<endl;

int ssum=0;

for(int i=0;i<n;i++){
    ssum = ssum + matrix[i][n-1-i];
}
cout<<"The sum of secondy digonal is = ";
cout<<ssum;
cout<<endl;
cout<<"Sum of both diognal is = ";

int allsum = psum+ ssum;

if(n%2==1){
   allsum = allsum - matrix[n/2][n/2];
}
    cout<<allsum;


    return 0;
}