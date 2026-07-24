#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;

    cout<<"Enter the word: ";
    cin>>str;

    cout<<"Word length is: "<<str.length()<<endl;

    cout<<"First letter: "<<str[0]<<endl;
    cout<<"Last letter: "<<str[str.length()-1]<<endl;

    cout<<"Each char: ";
    for(int i = 0; i<str.length(); i++){

        cout<<str[i]<<" ";
    }




    return 0;
}