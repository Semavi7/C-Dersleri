#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Turkish");

	FILE* dosya;
	dosya = fopen("C:\\Users\\semav\\OneDrive\\Desktop\\yeni3.txt", "w");

	fputs("Mehmet Burçhan Gürses", dosya);
	putc('\n', dosya);
	fputs("38", dosya);
	putc('\n', dosya);
	fputs("Anadolu Universitesi", dosya);

	fclose(dosya);


		return 0;
	}


