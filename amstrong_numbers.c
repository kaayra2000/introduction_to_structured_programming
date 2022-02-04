#include <stdio.h>
int main(int argc,char** argv){
	int i,sayi,toplam,basamak;
	for(i=101;i<1000;i++){
		sayi=i;
		toplam = 0;
		while(sayi!=0){
			basamak = sayi%10;
			toplam+=basamak*basamak*basamak;
			sayi/=10;
		}
		if(toplam==i){
			printf("%d, ", toplam);
		}
	}
	
	return 0;
}
