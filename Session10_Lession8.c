#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[1005][1005],m,n;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int q=0;q<n;q++)for(int i=0;i<m-1;i++){
        int x=i;
        for(int j=i+1;j<m;j++)if(a[j][q]<a[x][q])x=j;
        int tg=a[x][q];
        a[x][q]=a[i][q];
        a[i][q]=tg;

    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
}
