#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* ba�la;
int g�n gir
float anapara,faiz gir 
while -1 olmad��� s�rece d�ng�ye sok 
e�er -1 de�ilse anapara gir 
faiz gir
ka� g�nl�k faiz oldu�unu gir
faizi anapara*oran*g�nler/365 olarak hesapla 
faiz �cretini yazd�r
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

