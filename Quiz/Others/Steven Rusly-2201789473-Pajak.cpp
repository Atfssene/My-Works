#include<stdio.h>
int main(){
	int pb,istri,anak;
	long long pt,tp,gb;

//input	
	printf("Penghasilan Bulanan:");
	scanf("%d",&pb);
	printf("Jumlah Istri:");
	scanf("%d",&istri);
	printf("Jumlah Anak:");
	scanf("%d",&anak);
	
//proses

//istri
	if (istri>0){
		istri=4500000;
	} else if(istri=0){
		istri=0;
	}
	
//anak
	if (anak<=3){
		anak=anak*4500000;
	}else if (anak>3){
		anak=3*4500000;
	}

//penghasilan tahunan
	pt=(pb*12)+(istri)+(anak);

//pajak
	if (pt<54000000){
		tp=0;
	}else if(pt>54000000){
		tp=(pt-54000000)*0.05;
	}else if(pt>54000000 && pt<=250000000){
		tp=(pt-54000000)*0.15;
	}else if(pt>250000000 && pt<=500000000){
		tp=(pt-54000000)*0.25;
	}else if(pt>500000000){
		tp=(pt-54000000)*0.3;
	}
	
//gaji bersih
	gb=pt-tp;
	
//output
	printf("Pajak Tahunan:%lld\n",tp);
	printf("Pajak Bulanan:%lld\n",tp/12);
	printf("Gaji Bersih Tahunan:%lld\n",gb);
	printf("Gaji Bersih Bulanan:%lld\n",gb/12);	

		

	return 0;
}
