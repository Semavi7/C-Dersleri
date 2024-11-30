#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	FILE* metinbelgesi;
	char veri1[20] = "Bilgisayar ";
	char veri2[20] = "Muhendisligi ";
	char veri3[20] = "Bolumu";

	metinbelgesi = fopen("C:\\Users\\semav\\OneDrive\\Desktop\\yeni4.txt", "w");

	fputs(veri1, metinbelgesi);
	fputs(veri2, metinbelgesi);
	fputs(veri3, metinbelgesi);


	return 0;
}