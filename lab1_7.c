#include<stdio.h>
int main()
{
    float time;
    int a,b;
    scanf("%f",&time);
    a = (int)time;
    if(time>=0 && time<=23.59)
    {
        if(a>=0 && a<=23 && b>=0 && b<=59)
    {
        printf("%.2f ",time);
        if(a>=0 && a<=11)
        {
            printf("a.m.");
        }
        else if(a>=12 && a<=23)
        {
            printf("p.m.");
        }
    }
    }

    return 0;
}
