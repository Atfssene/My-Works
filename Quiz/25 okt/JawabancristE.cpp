#include <stdio.h>
#include <math.h>

int main(){
 int a,b,c,d,e;
 int i,j,l;
 long long int temp;
 
 scanf("%d",&a);
 for(i=0;i<a;i++){
  scanf("%d %d %d",&b,&d,&e);
  c=1;
  int f[b+1];
  temp=d%b;
  for(j=0;j<b;j++){
   f[j]=0;
  }
  
  for(l=0;;l++){
   if(l==0){
    f[temp]=c;
   }
   else if(f[temp]>0){
    c=c-f[temp];
    break;
   }
   else{
    f[temp]=c;
   }
   c++;
   temp=((e%b)*(temp%b))%b;
  }
  
  printf("Case #%d: %d\n",i+1,c);
 }  
 return 0;
}
