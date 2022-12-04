#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct city {
	char name[20];
	char country[20];
	int population;
} City;

void InputVariables(City dest[]);
void printCityArray(City city[]);

int main() {
	City city[SIZE];
	
	printf("Input three cities: \n");
	InputVariables(city);

	printf("Printing the three cities:\n");
	printCityArray(city);
}

void InputVariables(City dest[]) {
	City src[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("Name> ");
		gets(&src[i].name);
		printf("Country> ");
		gets(&src[i].country);
		printf("Population> ");
		scanf("%d", &src[i].population);
		getchar();
	}
	
	memcpy(dest, src, sizeof(src));
}

void printCityArray(City city[]) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, city[i].name, city[i].country, city[i].population);
	}
}