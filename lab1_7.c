#include<stdio.h>
int main()
{
    float time;
    int a;
    scanf("%f",&time);
    a = (int)time;
    if(a>=0 && a<=11)
    {
        printf("%.2f a.m.",time);
    }
    else if(a>=12 && a<=23)
    {
        printf("%.2f p.m.",time);
    }
    return 0;
}
