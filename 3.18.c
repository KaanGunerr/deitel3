#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*basla;
hesap numaras�n� int cinsinden gir
float olarak ilk bakiye,toplam harcama, toplam kredi,kredi limiti, kredi limiti, bakiye olarak gir 
hesap numaras� -1 olmad��� s�rece while d�ng�s�ne al
hesap numaras� yazd�r 
hesap numaras� =-1 de�il ise 
ilk bakiyeyi yazd�r
toplam harcamalar� yazd�r
toplam kredileri gir 
kredi limitini gir 
son bakiyeyi hesaplat
bakiye limitten b�y�k ��karsa limit a��ld�r yazd�r
bitir;
*/
int main(int argc, char *argv[]) {
int hesapnumarasi;
float bakiye, toplamharcama, toplamkredi, kredilimiti;
	while(hesapnumarasi!=-1){
	printf("Hesap numarasi girin:(Cikis icin-1)\n");
	scanf("%d",&hesapnumarasi);
		if(hesapnumarasi!=-1){
		printf("Ilk bakiyeyi girin:\n");
		scanf("%f",&bakiye);
		printf("Toplam harcamalari girin:\n");
		scanf("%f",&toplamharcama);
		printf("Toplam kredileri girin:\n");
		scanf("%f",&toplamkredi);
		printf("Kredi limitini girin:\n");
		scanf("%f",&kredilimiti);
		bakiye = bakiye + toplamharcama - toplamkredi;
		if(bakiye>kredilimiti){
			printf("Hesap numarasi:%d\nKredi limiti:%f\nBakiye:%f\nKredi limiti asildi.\n",hesapnumarasi,kredilimiti,bakiye);
		}
		
	}
}





	return 0;


}
