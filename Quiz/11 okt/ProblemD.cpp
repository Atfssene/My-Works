#include <stdio.h>
#include<math.h>
int main(){
	float x1,x2,x3,y1,y2,y3,z1,z2,z3;
	
	scanf("%f",&x1);
	scanf("%f",&x2);
	scanf("%f",&x3);
	
	if (x1==111||x1==222||x1==333||x1==444||x1==555||x1==666||x1==777||x1==888)
		{
			z1=x1/999;
			z1=z1*10.0;
			y1=floor(z1)/10.0;
			printf("%.1f...\n",y1); 
		}else{
			z1=x1/999;
			z1=z1*1000;
			y1=floor(z1)/1000.0;
			printf("%.3f...\n",y1);
		};
		
	if (x2==111||x2==222||x2==333||x2==444||x2==555||x2==666||x2==777||x2==888)
		{
			z2=x2/999;
			z2=z2*10.0;
			y2=floor(z2)/10.0;
			printf("%.1f...\n",y2); 
		}else{
			z2=x2/999;
			z2=z2*1000;
			y2=floor(z2)/1000.0;
			printf("%.3f...\n",y2);
		};
		
	if (x3==111||x3==222||x3==333||x3==444||x3==555||x3==666||x3==777||x3==888)
		{
			z3=x3/999;
			z3=z3*10.0;
			y3=floor(z3)/10.0;
			printf("%.1f...\n",y3); 
		}else{
			z3=x3/999;
			z3=z3*1000;
			y3=floor(z3)/1000.0;
			printf("%.3f...\n",y3);
		};
	
	
	return 0;
}

