#include <stdio.h>
 int main(void){
 		int m,i,j,a[100][100],k=0;
 	printf("lutfen satir ve sutun sayisini giriniz");
 	scanf("%d",&m);
 	for(i=1;i<=m;i++){
 		for(j=1;j<=m;j++){
 			printf("lutfen %d. satir %d. sutundaki elemani giriniz",i,j);
 			scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=1;i<=m;i++){
 			for(j=i;j<=m;j++){
 			if(a[i][j]!=a[j][i]){
 				k+=1;
			 }
			 }
		}
		printf("%d",k);
 	return 0;
 }
