#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void IntegerToBinary(int i) {
	int r;

	if (i < 2)
		r = i;
	else {
		r = i % 2;
		IntegerToBinary(i / 2);
	}
	printf("%d", r);

	return;
}

int main() {
	int n, res;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	IntegerToBinary(n);

	return 0;
}