#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[]={1,45,15,65,34,67,45,11,65,11},n;
int main(){
    printf("Nhap gia tri tim kiem: ");
   scanf("%lld",&n);
   for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
       if(a[i]==n)printf("%d ",i);
   }
}
