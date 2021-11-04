#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayici;
	int sayi;
	int enBuyuk;

	while (sayici < 10){
		printf("Bir Sayi Giriniz:\n");
		sayici +=1;
		scanf("%d",&sayi);

		if (sayi > enBuyuk){
			enBuyuk = sayi;
		}

	}

	printf("En buyuk girdi = %d", enBuyuk);
	
	return 0;
}
