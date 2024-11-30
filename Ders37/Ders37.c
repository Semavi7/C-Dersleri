#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");
	char i[100];
	system("COLOR 2");
	printf("Girdi: ");
	fgets(i, sizeof(i), stdin);
	puts(i);

	

	return 0;
}