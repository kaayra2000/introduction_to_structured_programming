#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int fonk(char *str);
//str[]=*str
int main(){
	char str[SIZE];
	int n;
	printf("Lutfen yaziyi giriniz");
	//scanf("%s",&str);
	gets(str);
	n=fonk(str);
	printf("Metininin karakter sayisi %d",n);
	return 0;
}
int fonk(char *str)
{
	if(*str!='\0') //null'da durmak gerek null='\0'
		return 1+fonk(++str);
		return 0;
}
