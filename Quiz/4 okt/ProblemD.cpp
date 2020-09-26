#include <stdio.h>
#include <math.h>
int main (){
	
	int n,k,t;
	n>=1;
	n<=128;
	k>=1;
	k<=30;
	
	scanf("%d%d",&n,&k);
	
	t=n*(pow(2,k));
	printf("%||d\n",t);
	return 0;
}
