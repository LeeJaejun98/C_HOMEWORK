#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int convert(int ch) {
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}
int main() {
	char str[50];
	int i;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; i < sizeof(str); i++) {
		str[i] = convert(str[i]);
	}
	printf("Output> %s \n", str);
}	
