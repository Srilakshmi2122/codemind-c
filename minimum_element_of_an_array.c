#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,min;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
            min=a[i];
    }
    printf("%d",min);
}