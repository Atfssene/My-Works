#include<stdio.h>

int main(){
	int testcase,angka,i,j;
	
	scanf("%d", &testcase);
	for (i=1;i<=testcase;i++){
		scanf("%d", &angka);
		printf("Case #%d:\n", i);
		for (j=0;j<=angka;j++){
			if (j==2||j==3||j==5||j==7||j==11||j==13||j==17||j==19||j==23||j==29||j==31||j==37){
				printf("I will become a good boy.\n");
			}
			if(j>5){
			
			if(j%2!=0&&j%3!=0&&j%5!=0&&j%7!=0&&j%11!=0&&j%13!=0&&j%17!=0&&j%19!=0&&j%23!=0&&j%29!=0&&j%31!=0&&j%37!=0){
				printf("I will become a good boy.\n");
			}
		}
		}
	}
	return 0;
}
