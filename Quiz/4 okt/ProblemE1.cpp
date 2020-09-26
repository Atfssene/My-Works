#include <stdio.h>
int main(){
	
	char a[10],b[10],c[10],d[10],e[10],f[10];
	
	scanf("%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]",a,d,b,e,c,f);
	
	printf("%-10s %s\n%-10s %s\n%-10s %s\n",a,d,b,e,c,f);
	
	return 0;
}
