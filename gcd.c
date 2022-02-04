#include <stdio.h>
int fonk(int n_1, int n_2);
int main(){
	int n1,n2,k1;
	printf("Lutfen sayilari giriniz\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	k1=fonk(n1,n2);
	printf("Ebob = %d",k1);
	
	return 0;
}
int fonk(int n_1, int n_2){

	while(n_1!=n_2){
		if(n_1>n_2)
		return fonk(n_1-n_2,n_2);
		else 
		return fonk(n_1,n_2-n_1);
	}
	return n_1;
}
