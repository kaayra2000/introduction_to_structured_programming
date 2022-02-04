#include <stdio.h>
#define SIZE 100
//""içinde tanýmlarsak string olur sayý ör SIZE "50"
	int main(void){
		int i,n,a[SIZE],m;
		
		printf("lutfen dizinin eleman sayisini giriniz");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			printf("lutfen dizinin %d. elemanini giriniz",i);
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n/2;i++){
			m=a[i];
			a[i]=a[n-i+1];
			a[n-i+1]=m;
		}
		for(i=1;i<=n;i++){
			printf("dizinin %d. elemani %d\n",i,a[i]);
		}
		return 0;
	}
