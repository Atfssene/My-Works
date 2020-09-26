#include<stdio.h>

int main(){
	int t,n,a,b;
	
	scanf("%d", &t);
	
	for (a=1;a<=t;a++){
		scanf("%d", &n);
		printf("Case #%d:\n",a);
		
		for (b=0;b<=n;b++){
			
			if (b==2||b==3||b==5||b==7||b==11||b==13||b==17||b==19||b==23||b==29||b==31||b==37){
				printf("I will become a good boy.\n");
			}
			
			if(b>5){
			
			if(b%2!=0&&b%3!=0&&b%5!=0&&b%7!=0&&b%11!=0&&b%13!=0&&b%17!=0&&b%19!=0&&b%23!=0&&b%29!=0&&b%31!=0&&b%37!=0){
				printf("I will become a good boy.\n");
			}
		}
		}
	}
	return 0;
}
