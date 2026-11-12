#include<stdio.h>
/*

(*) dereference operator
(&) address of / reference operator ---> gives memory address

   */
int main() {
	// syntax: <dataType> * <variable name>;
	// pointer variable
	int *ptr;

	int a = 67;
	ptr = &a; // put the memory address of a
	*ptr = 30;
	printf("%p\n", ptr);
	printf("%d\n",  *ptr);
}
