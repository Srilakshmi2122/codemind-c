#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    float avg,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    printf("%0.2f",avg);
}