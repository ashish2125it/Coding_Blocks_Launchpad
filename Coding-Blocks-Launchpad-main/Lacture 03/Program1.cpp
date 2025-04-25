#include <iostream> 
using namespace std;

int main()
{
   int number; 

   // Ask the user to enter a number
   cout << "Enter the number: ";
   cin >> number; // Read the number from user input

   // Check if the number is divisible by 2
   if (number % 2 == 0)
   {
       // If divisible by 2, then it's an even number
       cout << "Number is even";
   }
   else
   {
       // If not divisible by 2, then it's an odd number
       cout << "Number is odd";
   }

   return 0; 
}
