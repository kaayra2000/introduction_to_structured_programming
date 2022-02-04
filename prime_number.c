#include <stdio.h>
int main(void){
	int a,i,k=0,m;
	printf("lutfen sayiyi giriniz");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			k=1;
	}
	
		
	}
	
		if(k!=1 && a!=1){
			printf("sayi asaldir");
		}
		else{
			printf("sayi asal degildir");
		}
	return 0;
}
