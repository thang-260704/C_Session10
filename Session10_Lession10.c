#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[1005][1005],m,n;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    int max=fmax(m,n),min=fmin(m,n);
    for(int i=max-1;i>max-min;i--){
        int x=i;
        for(int j=i-1;j>=max-min;j--)
            if(a[max-j-1][j]>a[max-x-1][x])x=j;
        int tg=a[max-x-1][x];
        a[max-x-1][x]=a[max-i-1][i];
        a[max-i-1][i]=tg;
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
}
