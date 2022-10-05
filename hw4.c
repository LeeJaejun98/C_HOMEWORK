#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, cnt = 0;
	printf("Please enter a number: ");
	scanf("%d", &n);

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			cnt++;
	}
	if (cnt == 0)
		printf("It is a prime number.\n");
	else
		printf("It is not a prime number.\n");

	return 0;
}