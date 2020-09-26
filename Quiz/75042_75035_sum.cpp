#include <stdio.h>

int main()
{
	int index = 0,j,perhitungan,a,b;
	int jumlah;
	int hasil=0;
	int array;
	
	scanf("%d",&index);
	for (int i= 0 ;i<index;i++)
	{
		scanf("%d",&jumlah);
		scanf("%d",&perhitungan);
		int array[jumlah];
		
		for (int h=1;h<=jumlah;h++)
		{
			scanf("%d", &array[h]);
		}

		for (int k=1;k<=perhitungan;k++)
		{
			scanf("%d",&a);
			scanf("%d",&b);		
			
			for (int l=a; l<=b;l++)
			{
				hasil = hasil + array[l];
				
			}
			printf("%d\n", hasil);
			hasil=0;
		}
	}
	
	return 0;
}
