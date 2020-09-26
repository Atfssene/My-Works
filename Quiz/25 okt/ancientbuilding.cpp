#include<stdio.h>
#include<math.h>

int main(){
	
	int i,mod=1000000007;
	int a=0,b=0,c,d;
	long long int operasi1,operasi5;
	long long int operasi3=1;
	long long int operasi4=1;
	int testcase;
	
	scanf("%d",&testcase);
	for(i=1;i<=testcase;i++){
		scanf("%d",&a);
		scanf("%d",&b);

		c=a;
		d=b;

		if(c>10){
			while(c>10){
				operasi3=operasi3%mod*pow(2,10);
				c-=10;
			}
//			operasi3=operasi3%mod*pow(2,c);
		}
		if(c<=10){
			operasi3=operasi3%mod*pow(2,c);
		}
		operasi3=operasi3%mod;
		
		if(d>10){
			while(d>10){
				operasi4=operasi4%mod*pow(3,10);
				d-=10;
			}
//			operasi3=operasi3%mod*pow(2,d);
		}
		if (d<=10){
			operasi4=operasi4%mod*pow(3,d);
		}
		operasi4=operasi4%mod;
		operasi5=(operasi3*operasi4)%mod;
		printf("%lld\n",operasi5);
		
		operasi4=1;
		operasi3=1;
		operasi5=0;
		a=0;
		b=0;
	}
	return 0;
}
