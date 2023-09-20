//2. .Write a function in C that reverses a given string in-place without using string function.

#include<stdio.h>
int main(){
     char arr[6]="Milind",result;
     for(int i=6;i>=0;i--){
        result=arr[i];
     }
     printf("String is : %c",result);
}

