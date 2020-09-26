#include<stdio.h>

int a[1000001][11];
int main(){
 int angka0=0,angka1=0,angka2=0,angka3=0,angka4=0,angka5=0,angka6=0,angka7=0,angka8=0,angka9=0;
 int b,c,d,flag;
 int i,j,k;
 
 for(i=1;i<=1000000;i++){
  flag=i;
  while(flag>0){
   b=flag%10;
   flag/=10;
   switch(b){
     case 0: a[i][0]+=1; 
      break;
     case 1: a[i][1]+=1; 
      break;
     case 2: a[i][2]+=1; 
      break;
     case 3: a[i][3]+=1; 
      break;
     case 4: a[i][4]+=1; 
      break;
     case 5: a[i][5]+=1; 
      break;
     case 6: a[i][6]+=1; 
      break;
     case 7: a[i][7]+=1; 
      break;
     case 8: a[i][8]+=1; 
      break;
     case 9: a[i][9]+=1; 
      break;
   }
  }
 }
 
 scanf("%d",&c);
 getchar();
 for(j=1;j<=c;j++){
  scanf("%d",&d);
  angka0=0;
  angka1=0;
  angka2=0;
  angka3=0;
  angka4=0;
  angka5=0;
  angka6=0;
  angka7=0;
  angka8=0;
  angka9=0;
  getchar();
  for(k=1;k<=d;++k){
   angka0+=a[k][0];
   angka1+=a[k][1];
   angka2+=a[k][2];
   angka3+=a[k][3];
   angka4+=a[k][4];
   angka5+=a[k][5];
   angka6+=a[k][6];
   angka7+=a[k][7];
   angka8+=a[k][8];
   angka9+=a[k][9];
  }
  printf("Case #%d: %d %d %d %d %d %d %d %d %d %d\n",j,angka0,angka1,angka2,angka3,angka4,angka5,angka6,angka7,angka8,angka9);
 }
 return 0;
}
