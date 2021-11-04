#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*basla;
hesap numarasını int cinsinden gir
float olarak ilk bakiye,toplam harcama, toplam kredi,kredi limiti, kredi limiti, bakiye olarak gir 
hesap numarası -1 olmadığı sürece while döngüsüne al
hesap numarası yazdır 
hesap numarası =-1 değil ise 
ilk bakiyeyi yazdır
toplam harcamaları yazdır
toplam kredileri gir 
kredi limitini gir 
son bakiyeyi hesaplat
bakiye limitten büyük çıkarsa limit aşıldır yazdır
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
