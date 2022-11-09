#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input[5];
	int oddArray[5];
	int evenArray[5];
	int oddIndex = 0;
	int evenIndex = 0;

	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4]);

	for (int i = 0; i < 5; i++) {
		if (input[i] % 2 == 0)
			evenArray[evenIndex++] = input[i];

		else
			oddArray[oddIndex++] = input[i];
	}

	printf("Odd numbers: ");
	for (int i = 0; i < oddIndex; i++)
		printf("%d ", oddArray[i]);

	printf("\nEven numbers:");
	for (int i = 0; i < evenIndex; i++)
		printf("%d ", evenArray[i]);
	printf("\n");
}
