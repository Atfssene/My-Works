#include<stdio.h>
int main(){

	int test=0,x,y,a,b,h=0;
	int array;
	
	scanf("%d",&test);
	for (int i= 0 ;i<test;i++)
	{
		scanf("%d",&x);
		scanf("%d",&y);
		int array[x];
		
		for (int j=1;j<=x;j++){
			scanf("%d", &array[j]);
		}

		for (int k=1;k<=y;k++){
			scanf("%d",&a);
			scanf("%d",&b);		
			
			for (int l=a; l<=b;l++){
				h=h+ array[l];
			}
			
			printf("%d\n",h);
			h=0;
		}
	}
	
	return 0;
}
