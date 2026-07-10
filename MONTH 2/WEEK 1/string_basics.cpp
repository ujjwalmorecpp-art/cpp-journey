#include<iostream>
#include<string>
using namespace std;

int main(){

    string name = "Ujjwal";
    string place = "Pune";
    string laanguage = "C++";

    cout<<"My name is "<<name<<endl;
    cout <<"I live in "<<place<<endl;
    cout<<"I am learning "<<laanguage<<" language"<<endl;

    cout <<"String lenth of name is "<<name.length()<<endl;

    string fullinfo = name + " From "+place;
    cout<<fullinfo<<endl;



    return 0;
}