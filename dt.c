#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	char d,t;
	int a,b,bakiye,sayi1,sayi2,giris,s;
	
	printf("Kac dolar yatirmak istiyorsunuz?\n");
	scanf("%d",&a);
	bakiye=a;
	
	while(b!=-1){
		
	 printf("bakiye:%d\n",bakiye);
	 
    printf("Yapmak istediginiz bahis miktarini secin: 5$ 10$ 25$ 50$ 100$ 250$ (CIKIS ICIN -1)\n");
    scanf("%d",&b);
    
    if(b==-1){
    	break;
	}
	else{
	
	printf("Bahis yapmak istediginiz taraf Dragon icin:1  Tiger icin:2 ?\n");
	scanf("%d",&s);
	while(s<=0 || s>2){
		printf("gecerli sayi gir.");
		scanf("%d",&s);
	}
	srand(time(NULL));
	sayi1=1+rand()%10;
	sayi2=1+rand()%10;
	
	printf("Dragon:%d\n",sayi1);
	printf("Tiger:%d\n",sayi2);
	
switch(s){
	case 1:
		if(sayi1>sayi2){
			printf("Tebrikler kazandiniz.\n");
			bakiye = bakiye + b;
			break;
		}
		else if(sayi1==sayi2){
			printf("Berabere\n");
			break;
		}
		else{
			printf("Kaybettiniz.\n");
			bakiye = bakiye - b;
			break;
		}
		
	case 2:
	    if(sayi2>sayi1){
	    	printf("Tebrikler kazandiniz.\n");
	    	bakiye = bakiye + b;
	    	break;
		}	
		else if(sayi1==sayi2){
			printf("Berabere\n");
			break;
		}
		else{
			printf("Kaybettiniz.\n");
			bakiye = bakiye - b;
		}
		
		
}
	
}
	
}
	return 0;
}
