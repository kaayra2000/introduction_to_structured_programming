#include <stdio.h>
int main(int argc,char** argv){
	int sayi, ters_sayi=0;
	printf("Lutfen sayi giriniz.. \n");
	scanf("%d",&sayi);
	while(sayi>0){
		ters_sayi=ters_sayi*10+sayi%10;
		sayi/=10;
	}
	printf("Girdiginiz sayinin ters ifadesi = %d\n", ters_sayi);
	return 0;
}
