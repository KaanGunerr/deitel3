#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* ba�la;
float cinsinden sat�� tan�mla
while=-1 olmad��� zaman d�ng�ye devam et 
sat�� tutar� gir
e�er sat�� -1 de�ilse maa� + %9gir 
maa�� yazd�r
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
