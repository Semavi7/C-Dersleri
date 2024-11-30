#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	FILE* belge;
	char karakter;
	belge = fopen("C:\\Users\\semav\\OneDrive\\Desktop\\yeni3.txt", "r");
	do
	{
		karakter = getc(belge);
		printf("%c", karakter);
	} 
	while (karakter!=EOF);
	fclose(belge);


	return 0;
}