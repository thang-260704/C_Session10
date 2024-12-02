#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[1005][1005],m,n;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<fmin(m,n)-1;i++){
        int x=i;
        for(int j=i+1;j<fmin(m,n);j++)if(a[j][j]<a[x][x])x=j;
        int tg=a[x][x];
        a[x][x]=a[i][i];
        a[i][i]=tg;
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
}
/*
4 6
3 7 4 2 8 9
6 3 7 3 7 5
6 2 5 7 6 3
7 3 9 1 2 8
*/
