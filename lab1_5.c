#include<stdio.h>
int main()
{
    int N,i,max,lo=0;
    scanf("%d",&N);
    int a[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[1];
    for(i=1;i<=N;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            lo = i;
        }
        if(a[i]==a[i+1])
        {
            lo = i;
            break;
        }
    }
    printf("%d %d",lo,max);
}
