#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,c;
	float hasil;
	char res[100];
	scanf("%f",&a);
	getchar();
	scanf("%f",&b);
	getchar();
	scanf("%f",&c);
	getchar();
	hasil = a/999;
	snprintf(res,100,"%f",hasil);
	printf("0.%c%c%c...\n",res[2],res[3],res[4]);
	hasil = b/999;
	snprintf(res,100,"%f",hasil);
	printf("0.%c%c%c...\n",res[2],res[3],res[4]);
	hasil = c/999;
	snprintf(res,100,"%f",hasil);
	printf("0.%c%c%c...\n",res[2],res[3],res[4]);
	return 0;
}
