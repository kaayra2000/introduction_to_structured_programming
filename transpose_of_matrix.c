#include <stdio.h>
#include <math.h>
 int main(void){
 	int m,n,i,j,a[100][100],k;
 	printf("lutfen satir sayisini giriniz");
 	scanf("%d",&m);
 	printf("lutfen sutun sayisini giriniz");
 	scanf("%d",&n);
 	for(i=1;i<=m;i++){
 		for(j=1;j<=n;j++){
 			printf("lutfen %d. satir %d. sutundaki elemani giriniz",i,j);
 			scanf("%d",&a[i][j]);
		 }
	 }
	 if(m>n){
	 
	 	for(i=1;i<=m;i++){
 			for(j=1;j<=i;j++){
 				k=a[i][j];
 				a[i][j]=a[j][i];
 				a[j][i]=k;
			 }
		}
		}
		else{
			for(i=1;i<=m;i++){
 			for(j=i;j<=n;j++){
 				k=a[i][j];
 				a[i][j]=a[j][i];
 				a[j][i]=k;
 			}
 		}
		}
		for(i=1;i<=n;i++){
 			for(j=1;j<=m;j++){
			 printf("%d\t",a[i][j]);
		}
		printf("\n");}
 	return 0;
 }
