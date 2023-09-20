//Write a program to print EVEN numbers from 1 to N using a while loop.

#include<stdio.h>
//using namespace std;


int main(){
    int n;
    int number=1;
    printf("Enter the month number : ");
    scanf("%d",&n);

    while(number <=n){
       int number= n %2==0;
        printf("Even values :%d",number);
        n++;
        
        
        

    }
    
}