#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	FILE* dosya;
	dosya = fopen("C:\\Users\\semav\\OneDrive\\Desktop\\yeni.txt", "w");


	return 0;
}