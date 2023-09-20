//Write a program to compare two no by using the ternary operator in c.

#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the number : "<<endl;
    cin>>a>>b;

    a>b?("a is greater than b"):("b is greater than a");
}