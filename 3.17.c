#include <stdio.h>
#include <stdlib.h>

/*
Ba�la
galon, yol, toplamYol ve toplamGalon de�i�kenlerini float olarak tan�mla
galon -1 olmad��� s�rece while d�ng�s�ne al
	galon girdisi al
	galon -1 de�ilse km girdisi al km/galon yazd�r (if)
		toplamkm ve toplamgalon i�lemlerini yapt�r
toplam ortalama yazd�r
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
