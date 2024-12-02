#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a,b[100005],n,x;
int main(){
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a==x)b[i]++;
    }
    for(int i=0;i<n;i++)if(b[i])printf("%d ",i);
}
