#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power_function();
void factorial();

int main() {
	int choice;
	printf("Enter Calculation operation choice: \n1 - Addition.\n2 - Subtration.\n3 - Multiplication.\n4 - Division.\n5 - Modulus.\n6 - Power.\n7 - Factorial.\n8 - Exit.\n");
	scanf("%d", &choice);
	
	switch (choice) {
	case 1: addition();
		break;
	case 2: subtraction();
		break;
	case 3: multiplication();
		break;
	case 4: division();
		break;
	case 5: modulus();
		break;
	case 6: power_function();
		break;
	case 7: factorial();
		break;
	case 8: exit(0);
		break;
	}
}

void addition() {
	int n = 0;
	int sum = 0;
	int k = 0;
	int x = 0;
	printf("Enter the number of elements to sum: \n");
	scanf("%d", &n);
	printf("Enter all the numbers: \n");
	while (k < n) {
		scanf("%d", &x);
		sum = sum + x;
		k = k + 1;
	}
	printf("Sum of %d numbers is %d\n", n, sum);
}

void subtraction() {
	int result = 0;
	int x = 0;
	int y = 0;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	result = x - y;
	printf("Subtracting %d from %d, result is %d.\n", x, y, result);
}

void multiplication() {
	int result = 0;
	int x = 0;
	int y = 0;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	result = x * y;
	printf("Multiplying %d from %d, result is %d.\n", x, y, result);
}

void division() {
	float result;
	float x;
	float y;
	printf("Enter the first number: ");
	scanf("%f", &x);
	printf("Enter the second number greater than 0: ");
	scanf("%f", &y);
	while(y == 0) {
		printf("Input error. Enter a number greater than 0\n");
		scanf("%f", &y);
	}
	result = x / y;
	printf("Dividing %.0f from %.0f, result is %.2f.\n", x, y, result);
}

void modulus() {
	int result = 0;
	int x = 0;
	int y = 0;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	result = x % y;
	printf("Modulus of %d and %d is %d.\n", x, y, result);
}

void power_function() {
	int result = 0;
	int x = 0;
	int power = 0;
	printf("Enter the number: \n");
	scanf("%d", &x);
	printf("Enter power: \n");
	scanf("%d", &power);
	result = pow(x, power);
	printf("Result of %d to power %d is %d.\n", x, power, result);
}

void factorial() {
	int result = 1;
	int x = 0;
	printf("Enter the number to find factorial: \n");
	scanf("%d", &x);
	while (x < 0) {
		printf("Input error. Enter a number greater than 0");
		scanf("%d", &x);
	}
	for (int i = 1; i <= x; i++){
		result = result * i;
	}
	printf("Factorail of %d is %d", x, result);
}