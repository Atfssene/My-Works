#include<stdio.h>

int main(){
	int testcase,k,matriks[300][300],o,p,maxx,maxxi;
	
	scanf("%d",&testcase);
	for(int i=1;i<=testcase;i++){
		scanf("%d", &k);
		for(p=0;p<k;p++){
			for(o=0;o<k;o++){
				scanf(" %d", &matriks[p][o]);
			}
		}
		printf("Case #%d:\n", i);
		printf("Row :");
		
		for(p=0;p<k;p++){
			maxx=matriks[p][p];
			for(o=0;o<k;o++){
				if(matriks[p][o]>maxx){
					maxx=matriks[p][o];
				}
			}
			printf(" %d",maxx);
		}
		printf("\n");
		printf("Col :");
		for(p=0;p<k;p++){
			maxxi=matriks[0][p];
			for(o=0;o<k;o++){
				if(matriks[o][p]>maxxi){
					maxxi=matriks[o][p];
				}
			}
			printf(" %d",maxxi);
		}
		printf("\n");
	}

	return 0;
}
