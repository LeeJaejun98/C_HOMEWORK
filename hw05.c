#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int DigitToBinary(int num) {
	if (num > 1) {
		DigitToBinary(num / 2);
		printf("%d", num % 2);
	}

	else
		printf("%d", num % 2);
	
}

int main() {
	int n;

	printf("Please enter a number: ");
	scanf("%d", &n);
	DigitToBinary(n);


	return 0;
}