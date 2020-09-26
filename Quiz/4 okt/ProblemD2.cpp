#include <stdio.h>
#include <math.h>
int main(){
	
	int n;
	int k;
	long long t;
	
	n>=0;
	n<=128;
	k>=1;
	k<=30;
	
	scanf("%d" "%d",&n,&k);
	
	t=n*(pow(2,k));
	printf("%lld\n",t);
	return 0;
}
