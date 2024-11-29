#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define maksimum(s1,s2) (s1>s2) ? s1:s2

int main() {
	setlocale(LC_ALL, "Turkish");

	printf("%d\n", maksimum(10, 7));


	return 0;
}