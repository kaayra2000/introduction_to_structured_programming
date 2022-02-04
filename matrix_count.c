#include <stdio.h>
#include <math.h>
 int main(void){
 	int m,n,i,j,a[100][100],c,k,l,count;
 	printf("lutfen satir sayisini giriniz");
 	scanf("%d",&m);
 	printf("lutfen sutun sayisini giriniz");
 	scanf("%d",&n);
 	printf("kacinci eleman");
 	scanf("%d",&c);
 	for(i=1;i<=m;i++){
 		for(j=1;j<=n;j++){
 			printf("lutfen %d. satir %d. sutundaki elemani giriniz",i,j);
 			scanf("%d",&a[i][j]);
 		}
 	}
 	k=1;
 	l=1;
 	count=0;
	while(k<m && l<n){
		for(i=l;i<=n;i++){
			count++;
			if(count==c)
			printf("%d",a[k][i]);
		}
		k++;
		for(i = k;i<=m;i++){
			count++;
			if(count==c){
				printf("%d",a[i][n]);
			}
		}
		n--;
		if(k<m){
			for(i=n;i>=l;i--){
				count++;
				if(count==c)
				printf("%d",a[m][i]);
				
			}
			m--;
		}
		if(l<n){
			for(i=m;i>=k;i--){
				count++;
				if(count==c)
				printf("%d",a[i][l]);
			}
		}
		l++;
	}
	
 		
			return 0;
 		}
 			
