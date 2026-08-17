#include<iostream>
using namespace std;

int main(){

    int m,n,ENTER;

    cout<<"Enter the no of rows: ";
    cin>>m;

    cout<<"Enter the no of column: ";
    cin>>n;

    int a[m][n];

    cout<<"Total no of shells are: "<<m*n<<endl;

    cout<<"Now enter the all number which wanted to store "<<endl;
    

     for(int i =0;i<m;i++){

        for(int j =0; j<n; j++){
        cin>>a[i][j];
        }
    }
cout<<endl;

    for(int j = 0; j<n; j++ ){

        int sum = 0;

        for(int i =0; i<m; i++){

            sum = sum + a[i][j];
           
        }
         cout<<"Sum of column "<<j<<" = "<<sum<<endl;
    }

return 0;
}