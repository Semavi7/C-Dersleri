#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	char kitapad[30], yazar[30], kitapyazar[100];

	printf("Kitap Adi ve Yazari Girin: ");
	scanf("%s%s",kitapad, yazar);
	strcat(kitapyazar, kitapad);
	strcat(kitapyazar, " ");
	strcat(kitapyazar, "<-->");
	strcat(kitapyazar, yazar);
	printf("\n\n");
	printf("%s", kitapyazar);
	

	return 0;
}