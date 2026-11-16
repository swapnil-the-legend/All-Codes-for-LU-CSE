#include<stdio.h>
// Call by value
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("swapped %d %d\n", a, b);
}
//  call by reference
void swap_p(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int x = 7, y = 9;
	printf("original %d %d\n", x, y);
	swap(x,y);
	swap_p(&x,&y);
	printf("after swap with pointer %d %d\n", x, y);
}
