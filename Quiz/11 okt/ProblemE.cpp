#include <stdio.h>

int main(){

	int n,t,i,m,r,n1,m1,r1,n2,m2,r2,n3,m3,r3;

    
    	
	scanf("%d", &t);
		for(int i=1;i<=t;i++){
		scanf("%d",&n);
		

    while(n != 0)
    {
        r = n%10;
        m = m*10 + r;
        n /= 10;
    }
		n1=n+m;
	
	while(n1 != 0){
		r1 = n1%10;
        m1 = m1*10 + r1;
        n1 /= 10;
	}
	
		n2=m+m1;
	
	while(n2 != 0){
		r2 = n2%10;
        m2 = m2*10 + r2;
        n2 /= 10;	
	}
	
	n3=n2+m2;
	
	while(n3 != 0){
		r3 = n3%10;
        m3 = m3*10 + r3;
        n3 /= 10;
	}
		printf("Case #%d:%d %d %d %d\n",i,m1,m,m3,m2);

	}
	
	return 0;
}
