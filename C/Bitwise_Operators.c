#include<stdio.h>
int main() {
    int n, k;
  int andvalue=0,orvalue=0,xorvalue=0;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 int maxAndvalue=0;
 int maxOrvalue=0;
 int maxXorvalue=0;
 for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        andvalue=i & j;
        orvalue=i | j;
        xorvalue=i ^ j;
    
    if(andvalue<k && andvalue>maxAndvalue){
        maxAndvalue=andvalue;
    }
    if(orvalue<k && orvalue>maxOrvalue){
        maxOrvalue=orvalue;
    }
    if(xorvalue<k && xorvalue>maxXorvalue){
        maxXorvalue=xorvalue;
    }
 }
 }
 printf("%d\n",maxAndvalue);
 printf("%d\n",maxOrvalue);
 printf("%d",maxXorvalue);
    return 0;
}
