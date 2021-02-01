#include<stdio.h>
int main()
{
    float time;
    int a;
    scanf("%f",&time);
    a = (int)time;
    printf("%.2f ",time);
    if(a>=0 && a<=11)
    {
        printf("a.m.");
    }
    else if(a>=12 && a<=23)
    {
        printf("p.m.");
    }
    return 0;
}
