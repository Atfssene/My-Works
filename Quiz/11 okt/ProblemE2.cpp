#include<stdio.h>

int main()
{
	unsigned long long a,r,balik_number=0,jumlah,balik_jumlah=0,reminder,reminder1,angka,jumlah1;
	unsigned int tcase,variable,balik_angka;
	
	scanf("%u", &tcase);
	
	for(variable=1;variable<=tcase;variable++){
		scanf("%llu", &a);
		
		{
		angka=a;
		balik_angka=balik_number;
   		while (a!=0)
   		{
    		reminder=a%10;
     		balik_number=balik_number*10 + reminder;
    		a=a/10;
    		
    
  		}
  		
   		jumlah=angka+balik_number;
   		jumlah1=jumlah;
   		
   		
		  {
		   while (jumlah!=0)
   		{
   			reminder1=jumlah%10;
   			balik_jumlah=balik_jumlah*10 + reminder1;
   			jumlah=jumlah/10;
   			
  		}}}
		
	printf("Case #%u: %llu %llu %llu %llu\n", variable, angka, balik_number, jumlah1, balik_jumlah);
	angka=0;	
	balik_number=0;
	jumlah1=0;
	balik_jumlah=0;
	
	}
	

	
	
	
	
	
	
	
	return 0;
}
