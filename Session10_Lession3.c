#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
insertionSort(long long a[],long long n){
    for(int i=1;i<n;i++){
        long long tg=a[i],x=i-1;
        while(x>=0&&tg<a[x]){
            a[x+1]=a[x];
            x--;
        }
        a[x+1]=tg;
    }
}
long long a[10005],n;
int main()
{
  scanf("%lld",&n);
  for(int i=0;i<n;i++)scanf("%lld",&a[i]);
  insertionSort(a,n);
  for(int i=0;i<n;i++)printf("%lld ",a[i]);
}
