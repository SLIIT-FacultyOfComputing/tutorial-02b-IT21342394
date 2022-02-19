/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long factorial(int no);
long nCr(int n , int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}


long factorial(int no){
  int i, total=1;	
	for(i=1; i<=no; i++){
	total= total*i;
	}
  return total;
}

	
long nCr(int n , int r){
	
	long outputn= factorial(n);
	long outputr= factorial(r);
	int t=n-r;
	long output= factorial(t);
	float cal = outputn/(outputr*output);
	return cal;
}


