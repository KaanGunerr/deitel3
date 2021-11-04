#include <stdio.h>
#include <stdlib.h>

/*
Baþla
galon, yol, toplamYol ve toplamGalon deðiþkenlerini float olarak tanýmla
galon -1 olmadýðý sürece while döngüsüne al
	galon girdisi al
	galon -1 deðilse km girdisi al km/galon yazdýr (if)
		toplamkm ve toplamgalon iþlemlerini yaptýr
toplam ortalama yazdýr
Bitir
*/

int main(int argc, char *argv[]) {
	
	float galon,yol,toplamYol,toplamGalon;
	
	while(galon!=-1){
		
		printf("Kac galon benzin harcandi (cikis icin -1):\n");
		scanf("%f",&galon);
		
		if(galon!=-1){
		
		printf("Kac kilometre yol alindi:\n");
		scanf("%f",&yol);
		printf("Kilometre / galon: %f\n",yol/galon);
		
		toplamYol=toplamYol+yol;
		toplamGalon=toplamGalon+galon;
		
	}
	
	}
	
	printf("Toplam ortalama kilometre/galon: %f\n", toplamYol/toplamGalon);
	
	return 0;
}
