#include<stdio.h>
int calculateSalary(int age, int experience) {
	return (5000*age) + (200*experience);
}
int main() {
	// Salary = 5000*age + 200*experience (in year)
	int employee1 = calculateSalary(35, 3);
	printf("salary: %d\n", employee1);
}
