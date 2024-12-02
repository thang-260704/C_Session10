#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void selectioSort(long long a[],int n){
    for(int i=0;i<n-1;i++){
        int minPos=i;
        for(int j=i+1;j<n;j++){
            if((a[j]<a[minPos]))minPos=j;
        }
        long long tg=a[i];
        a[i]=a[minPos];
        a[minPos]=tg;
    }
}
long long a[10005],n;
int main()
{
  scanf("%lld",&n);
  for(int i=0;i<n;i++)scanf("%lld",&a[i]);
  selectioSort(a,n);
  for(int i=0;i<n;i++)printf("%lld ",a[i]);
}
