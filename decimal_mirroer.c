#include <stdio.h>
#define SIZE 100
void a(char* str1);
int main(){
	char str[SIZE],reversed[SIZE];
	printf("Yaziyi giriniz\n");
	scanf("%s",str);
	a(str);
}
void a(char *str1){
	if(*str1!='\0')
	a(str1+1);
	printf("%c",*str1);//*str1=str1[0]
}
