#include<stdio.h>
// Scope of a function
void print() {
	 int x = 3;
	printf("value of x is %d\n", x);
}
int main() {
	int x = 67;
	print();
}
