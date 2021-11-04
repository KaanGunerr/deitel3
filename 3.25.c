#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;

	sayi = 1; 

	printf("N\t N*10\t N*100\t N*1000\n");

	while (sayi <= 10){

		printf("\n%d\t %d\t %d\t %d",sayi, sayi*10, sayi*100, sayi*1000);
		sayi ++;
	}

	
	
	
	
	
	
	return 0;
}
