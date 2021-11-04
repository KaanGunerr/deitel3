#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* baþla;
int gün gir
float anapara,faiz gir 
while -1 olmadýðý sürece döngüye sok 
eðer -1 deðilse anapara gir 
faiz gir
kaç günlük faiz olduðunu gir
faizi anapara*oran*günler/365 olarak hesapla 
faiz ücretini yazdýr
*/







int main(int argc, char *argv[]) {

int gun;
float anaPara,oran;
	while (anaPara!=-1){
	printf("Anaparayi girin (cikis icin -1):\n");
	scanf("%f",& anaPara);
	if (anaPara!=-1){
		printf("Faiz oranini girin:\n");
		scanf("%f",&oran);
		printf("Kac gunluk faiz:\n");
		scanf("%d",&gun);
		printf("Faiz ucreti:%.2f $dir.\n",anaPara*oran*gun/365);
	}
	
	
}








	return 0;
}

