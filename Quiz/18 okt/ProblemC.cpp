#include<stdio.h>
int main(){
	int test;
	float x,y,z,x1,y1,z1;
	float h=0,h1=0;
	
	scanf("%d",&test);
	
	for(int i=1;i<=test;i++){
		scanf("%f %f %f",&x,&y,&z);
		scanf("%f %f %f",&x1,&y1,&z1);
		h=-((y*z1)-(y1*z))/((x*y1)-(x1*y));
		h1=-((x1*z)-(x*z1))/((x*y1)-(x1*y));
		
		printf("Case #%d:\n",i);
		printf("x = %.4f\n",h);
		printf("y = %.4f\n",h1);
	}
	
	
	
	return 0;
}
