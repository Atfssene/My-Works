#include <stdio.h>
int main(){
	
	char a[50];
	int b;
	
	scanf("%[A-Za-z]%d",a,&b);
	
	printf("%s %d",a,b);
	
	return 0;
}
