#include<stdio.h>
// Direct Recursion

// Sum of natural numbers
int sum(int n) {
	if (n == 1) return 1;
	else return sum(n-1) + n;
}
// Recursive function adds itself x times
int it(int n, int x) {
	if (x == 0) return 0;
	else return n + it(n,x-1);
}
// Recursive function squares itself x times
int sqr(int n, int x) {
	if (x == 0) return 1;
	else return n * sqr(n,x-1);
}
// Fibonacci our goat
int fib(int n) {
	if (n < 1) return -1; // never

	if (n == 1) return 0;
	else if (n == 2) return 1;
	else return fib(n-2) + fib(n-1);
}

// Uh Number itself
int runBauBau(int n) {
	if (n == 1) return 1;
	else return 1 + runBauBau(n-1);
}

// Indirect Recursion
#define RANGE 10

int odd(int n);
int even(int n);

int odd(int n) {
	if (n <= RANGE) {
		printf("%d", n+1);
		even(++n);
	}
	else puts("");
}
int even(int n) {
	if (n <= RANGE) {
		printf("%d", n-1);
		odd(++n);
	}
}
int main() {
	odd(1);
}
