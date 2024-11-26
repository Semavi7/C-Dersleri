#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	//char ile tanýmlanan metinsel ifadeyi kopyalayýp alt tarafta kullnmak için onu hafýzaya alan komut

	char kaynak[30] = "Merhaba Balýkesir";
	char kopya[30] = " ";
	strcpy(kopya, kaynak);
	printf("%s", kopya);

	printf("\n");

	char nereden[30] = "Merhaba Ankara";
	char nereye[30] = " ";
	strncpy(nereye, nereden, 14);
	printf("%s", nereye);


	return 0;
}