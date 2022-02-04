#include <stdio.h>
int main(void){
	int i,n;
	printf("please enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	
	}
	i=n;
	while(i>=1){
		printf("%d\n",i);
		i=i-1;
	}
	
	
	return  0;
}
