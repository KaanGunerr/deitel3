#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int saat,yenisaat;
float maas;
		while(saat!=-1){
printf("Calisma saatini girin: (Cikis icin -1):\n");
scanf("%d",&saat);

		if(saat!=-1){
printf("Calisanin saatlik ucretini girin ($00.00):\n");
		scanf("%f",&maas);
}if (saat<=40){
	printf("Calisanin maasi %.2f $ dir.\n",saat*maas);
	
}else if (saat>40){
	yenisaat=saat-40;
	printf("Calisanin maasi %.2f $ dir.",saat*maas + yenisaat * maas * 1/2);
}
	
	
	
	
	
	
	
	
	
	
	
}
	return 0;
}
