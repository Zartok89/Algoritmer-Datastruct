#include <iostream>
#include "Compulsory 1.h"

using namespace std;

int main()
{
    cout << "Enter your number input: ";
    cin >> NumberInput;
    Factorial(NumberInput);
    Fibonacci(NumberInput);
    PrintFactorial();
    PrintFibonacci();
}

double Factorial(double FactorialNumber)
{
   if (FactorialNumber == 1 || FactorialNumber <= 0)
   {
       FactorialResult = 1;
   }
   else
   {
       FactorialResult = FactorialNumber * Factorial(FactorialNumber-1);
   }
   return FactorialResult;
}

double Fibonacci(double FibonacciNumber)
{
   if (FibonacciNumber <= 2)
   {
       FibonacciResult = 1;
   }
   else
   {
       FibonacciResult = Fibonacci(FibonacciNumber-1) + Fibonacci(FibonacciNumber-2);
   }
	return FibonacciResult;
}

void PrintFactorial()
{
    cout << "Factorial result of n: " << FactorialResult;
    cout << endl;
}

void PrintFibonacci()
{
	cout << "Fibonacci result of n: " << FibonacciResult;
    cout << endl;
}
