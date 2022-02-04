#include <stdio.h>
#define SIZE 100
 int main(void){
 	int n,a[SIZE], maj_index,i,count,cand;
 	printf("lutfen dizinin eleman sayisini giriniz");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			printf("lutfen dizinin %d. elemanini giriniz",i);
			scanf("%d",&a[i]);
		}
		maj_index=0;
		count=1;
		for(i=2;i<=n;i++){
			if(a[maj_index]==a[i])
			count++;
			else
			count--;
			if(count==0){
				maj_index =i;
				count=1;
			}
		}
		cand=a[maj_index];
		count=0;
		for(i=1;i<=n;i++){
			if(a[i]==cand)
			count++;
		}
		if(count>n/2)
			printf("%d",cand);
		else
		printf("yok");
 	return 0;
 }
