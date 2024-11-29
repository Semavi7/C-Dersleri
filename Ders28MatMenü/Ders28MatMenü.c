#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");
	
	printf("********************\n");
	printf("**      MENÜ      **\n");
	printf("********************\n\n");

	printf("1.Toplama\n");
	printf("2.Çýkarma\n");
	printf("3.Kare Alma\n");
	printf("4.Küp Alma\n");
	printf("5.Denklem(5x^2+4x+3)\n\n");
	printf("Çýkýþ Yapmak Ýçin 0'ý Tuþlayýn\n\n");

	int s1, s2, islem, toplam;
	yeniden:
		printf("Ýþlem No Giriniz: ");
		scanf("%d", &islem);
		printf("\n");

		switch (islem)
		{
		case 1: 
			printf("Sayý Biri Giriniz: ");
			scanf("%d", &s1);
			printf("Sayý Ýkiyi Giriniz: ");
			scanf("%d", &s2);
			toplam = s1 + s2;
			printf("Toplam: %d\n\n", toplam);
			goto yeniden;
			break;
		case 2:
			printf("Sayý Biri Giriniz: ");
			scanf("%d", &s1);
			printf("Sayý Ýkiyi Giriniz: ");
			scanf("%d", &s2);
			toplam = s1 - s2;
			printf("Çýkarma Sonucu: %d\n\n", toplam);
			goto yeniden;
			break;
		case 3:
			printf("Karesi Alýnacak Sayýyý Girinzi: ");
			scanf("%d", &s1);
			toplam = s1 * s1;
			printf("%d Sayýsýnýn Karesi: %d\n\n", s1, toplam);
			goto yeniden;
			break;
		case 4:
			printf("Küpü Alýnacak Sayýyý Giriniz: ");
			scanf("%d", &s1);
			toplam = s1 * s1 * s1;
			printf("%d Sayýsýnýn Küpü: %d\n\n", s1, toplam);
			goto yeniden;
			break;
		case 5:
			printf("x Deðerini Giriniz: ");
			scanf("%d", &s1);
			toplam = 5 * s1 * s1 + 4 * s1 + 3;
			printf("Denklemin Sonucu: %d\n\n", toplam);
			goto yeniden;
			break;
		default:
			printf("Çýkýþ");break;
		}
	





	return 0;
}