#include<stdio.h>
int main(){
	int t,n,a,b;
	
	scanf("%d",&t);
	
	for(a=1;a<=t;a++){
		scanf("%d",&n);
		printf("Case #%d:\n",a);
		for(b=0;b<=n;b++){
			
			if(b==2||b==3||b==5||b==7){
				printf("I will become a good boy.\n");
			}
			
			if(b>5){
				
				if(b%2!=0&&b%3!=0&&b%5!=0&&b%7!=0){
					printf("Iwill become a good boy.\n");
				}
			}
		}
	}
	
	
	return 0;
}
