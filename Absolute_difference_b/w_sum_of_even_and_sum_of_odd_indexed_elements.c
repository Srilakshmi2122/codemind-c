#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,es=0,os=0,d;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        es=es+a[i];
        else 
        os=os+a[i];
        d=es-os;
    }
    printf("%d",d);
}