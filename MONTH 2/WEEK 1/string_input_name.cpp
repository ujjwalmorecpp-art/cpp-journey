#include<iostream>
#include<string>
using namespace std;

int main(){

    string firstname;
    string fullname;

    cout<<"Enter the first name: ";
    cin>>firstname;
    cout<<"Your first name is "<<firstname<<endl;

    cin.ignore();

    cout<<"Enter the full name: "<<endl;
    getline(cin, fullname);
    cout<<"Full name is: "<<fullname<<endl;
    cout<<"Length of full length is: "<<fullname.length()<<endl;

  

    return 0;
}