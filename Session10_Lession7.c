#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[1005][1005],m,n;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int q=0;q<m;q++)for(int i=0;i<n-1;i++){
        int x=i;
        for(int j=i+1;j<n;j++)if(a[q][j]<a[q][x])x=j;
        int tg=a[q][x];
        a[q][x]=a[q][i];
        a[q][i]=tg;
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
}
/*
  1 2 3 4 5 6 i n
1 3 7 4 2 8 9
2 6 3 7 3 7 5
3 6 2 5 7 6 3
4 7 3 9 1 2 8
q
m
a[q][i]
*/
