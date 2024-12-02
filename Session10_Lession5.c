#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[100005],n,x;
int cmp(const void *ptr1, const void *ptr2){
    int *x=(int*)ptr1;
    int *y=(int*)ptr2;
    if(*x<*y)return -1;
    else return 1;
}
int firstPost(int a[],int n, int x){
    int l=0,r=n-1,pos=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            pos=m;
            r=m-1;
        }
        else if(a[m]<x)l=m+1;
        else r=m-1;
    }
    return pos;
}
int main(){
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    if(firstPost(a,n,x)==-1)printf("%d khong xuat hien trong mang",x);
    else printf("%d",firstPost(a,n,x));
}
