#include <iostream>
using namespace std;

int main() {
   int fib, pre = 0, pos = 1, n = 5, i = 0; 

   while (i < n) {
       fib = pre + pos;   // Calculate the next Fibonacci number
       cout << fib << endl;  // Print the current Fibonacci number
       
       pre = pos;   // Move the previous number to the current position
       pos = fib;   // Move the current number to the next position
       
       i++;   // Increment the counter
   }

   return 0;
}