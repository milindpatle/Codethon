// Write a program in C to read any Month Number in integer and display Month name in
// the word.(using switch case).

#include <iostream>
using namespace std;
int main()
{
   int month;
   cout << "Enter the month number: " << endl;
   cin >> month;

   switch (month)
   {
   case 1:
      cout << "1st month is January" << endl;
      break;
   case 2:
      cout << "2st month is Febuary" << endl;
       break;
   case 3:
      cout << "3rd month is March" << endl;
       break;
   case 4:
      cout << "4th month is April" << endl;
       break;
   case 5:
      cout << "5th month is May" << endl;
       break;
   case 6:
      cout << "6th month is June" << endl;
       break;
   case 7:
      cout << "7th month is July" << endl;
       break;
   case 8:
      cout << "8th month is August" << endl;
       break;
   case 9:
      cout << "9th month is September" << endl;
       break;

   case 10:
      cout << "10th month is  Octuber"<<endl;
       break;
   case 11:
      cout << "11th month is November" << endl;
       break;
   case 12:
      cout << "12th month is December" << endl;
       break;
   }
   
}
