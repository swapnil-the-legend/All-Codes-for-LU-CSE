#include<stdio.h>
/* 
   Function syntax: <return-type> <functionName>() {
   ....code body
   }
*/
// Function Prototype with no parameters / declaration
void add();
// with parameter
int add_p(int a, int b); // Optional to add variable names after a datatype in declaration
int main() {
	// add(); // Calling function (1)
	int result = add_p(9,1); // Actual parameter / argument
	printf("result %d\n", result);
}
// Function definition
void add() { // called function (1)
	int x = 3, y = 7; 
	int sum = x+y;
	printf("addition of %d and %d = %d\n, x, y, z", x, y, sum);
}
// Function definition a and b are parameters
int add_p(int a, int b) {
	return a+b;
}
