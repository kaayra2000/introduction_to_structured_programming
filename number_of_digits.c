#include <stdio.h>
#include <stdlib.h>
int fonk(int number1);
int main(){
	int n,number;
	printf("Lutfen sayiyi giriniz");
	scanf("%d",&number);
	n=fonk(number);
	printf("Sayinin basamak sayisi %d",n);
	return 0;
}
int fonk(int number1)
{
	if(number1>=1)
	return 1+fonk(number1/10);
	return 0;
}
