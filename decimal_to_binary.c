#include <stdio.h>
int main(int argc,char** argv){
	int i=0,k,a=1,ty;
	printf("Lutfen sayiyi giriniz,, \n");
	scanf("%d",&k);
	ty=k;
	while(k>0){
		i=i+k%2*a;
		a*=10;
		k/=2;
	}
	printf("%d'nin 2 tabanindaki hali = %d  \n",ty,i);
return 0;
}
