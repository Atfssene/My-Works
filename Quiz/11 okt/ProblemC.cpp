#include<stdio.h>
int main()
{
	int t,n,a,l;
	
	scanf("%d",&t);
	
	for(a=1;a<=t;a++){
		scanf("%d",&n);
		l= (n/4) - (n/100) + (n/400);
		printf("Case #%d: ",a);
		printf("%d\n",l);
		l= 0;
		}
	
		return 0;
	}
