#include<stdio.h>
int main (){
	int test,k,matrix[300][300],x,y,mat1,mat2;
	
	scanf("%d",&test);
	for(int i=1;i<=test;i++){
		scanf("%d", &k);
		
		for(y=0;y<k;y++){
			for(x=0;x<k;x++){
				scanf(" %d", &matrix[y][x]);
			}
		}
		
		printf("Case #%d:\n",i);
		printf("Row :");
		
		for(y=0;y<k;y++){
			mat1=matrix[y][y];
			for(x=0;x<k;x++){
				if(matrix[y][x]>mat1){
					mat1=matrix[y][x];
				}
			}
			printf(" %d",mat1);
		}
		printf("\n");
		printf("Col :");
	
		for(y=0;y<k;y++){
			mat2=matrix[0][y];
			
			for(x=0;x<k;x++){
				if(matrix[x][y]>mat2){
					mat2=matrix[x][y];
				}
			}
			printf(" %d",mat2);
		}
		printf("\n");
	}
	
	return 0;
}
