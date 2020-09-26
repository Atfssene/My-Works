#include<stdio.h>

int main()
{
	unsigned long long n,o,r,m=0,n1,m1=0,o1,r1;
	unsigned int t,i,balik_angka;
	
	scanf("%u", &t);
	
	for(i=1;i<=t;i++){
		scanf("%llu", &n);
	{
		o=n;
		balik_angka=m;
   		
	while (n!=0){
    		r=n%10;
     		m=m*10 + r;
    		n/=10;
    		
    
  		}
  		
   		n1=o+m;
   		o1=n1;
   		{

	while (n1!=0){
   			r1=n1%10;
   			m1=m1*10 + r1;
   			n1/=10;
   	}
		
	}
	}
		
	printf("Case #%u: %llu %llu %llu %llu\n",t,o,m,o1,m1);
	o=0;	
	m=0;
	o1=0;
	m1=0;
	
	}
	

	
	
	
	
	
	
	
	return 0;
}
