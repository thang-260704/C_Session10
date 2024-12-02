#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
bubbleSort(long long a[], long long n){
    for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){
        long long tg=a[j];
        a[j]=a[j+1];
        a[j+1]=tg;
    }
}
long long a[10005],n;
int main()
{
  scanf("%lld",&n);
  for(int i=0;i<n;i++)scanf("%lld",&a[i]);
  bubbleSort(a,n);
  for(int i=0;i<n;i++)printf("%lld ",a[i]);
}
