#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* baþla;
float cinsinden satýþ tanýmla
while=-1 olmadýðý zaman döngüye devam et 
satýþ tutarý gir
eðer satýþ -1 deðilse maaþ + %9gir 
maaþý yazdýr
bitir;
*/
int main(int argc, char *argv[]) {
	float satis;
	while (satis!=-1){
		printf("Dolar cinsinden satis tutarini giriniz:\n");
		scanf("%f",&satis);
		if(satis!=-1){
			printf("Maas:%.2f $\n",satis*9/100+200);
		}
	}
	
	
	return 0;
}
