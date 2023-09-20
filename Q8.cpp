//Write a program to find second largest number in an array
#include <iostream>
using namespace std;

void Showarray(int arr[], int n ) {
   for( int i = 0; i < n; i++ ){
      cout << arr[ i ] << ", ";
   } 
   cout << endl;
} 



int main() {
   int arr[ ] = {10,12,23,4,5,23,45,65,32,54,65};
   int n = 45;
   
   cout << "Given array elements: ";
   Showarray( arr, n);
   
   cout << "The second largest element: " <<;
}