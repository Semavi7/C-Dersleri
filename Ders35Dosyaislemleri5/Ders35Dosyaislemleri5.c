#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	FILE* belge;
	char karakter[50];

	belge = fopen("C:\\Users\\semav\\OneDrive\\Desktop\\yeni3.txt", "r");
	
	while (fgets(karakter, 50, belge) != NULL) { //NULL Satýr okurken EOF karakter okurken uygun
		puts(karakter);
	}
	
	fclose(belge);


	return 0;
}