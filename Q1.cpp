//1. Write a program to find the cube of a number use loop

#include<iostream>
using namespace std;

int main(){
int n;
int cube;

cout<<"Enter the number : "<<endl;
cin>>n;

while(n!=0){
    cube=n*n*n;
    cout<<cube<<" ";
    break;
    
}

cout<<endl;

}