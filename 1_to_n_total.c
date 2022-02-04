#include <stdio.h>
#define SIZE 100
int fonk(int n1);
int main(){
	int n,sum;
	printf("Lutfen sayiyi giriniz");
	scanf("%d",&n);
	sum=fonk(n);
	printf("Toplam = %d",sum);
	return 0;
}
int fonk(int n1){
	if(n1==1)
		return 1;
	return n1+fonk(n1-1);
	
}
