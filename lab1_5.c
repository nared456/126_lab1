#include<stdio.h>
int main()
{
    int N,i,max,lo=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            lo = i;
        }
    }
    printf("%d %d",lo+1,max);
    return 0;
}
