#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sayi,toplam;
	
	for(sayi=1;sayi<1000;sayi++){
		
		for(i=1;i<sayi;i++){
			
			if(sayi%i==0){
				
				toplam +=i;

			}
				if(sayi==toplam){
				
				printf("%d muhtesem sayidir.\n",sayi);
				}
		}
		toplam=0;
	}
	
	
	
	
	
	
	return 0;
}
