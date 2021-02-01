#include<stdio.h>
int main()
{
    int n,m,j=0,i,c=0;
    long long t;
    char f,s;
    scanf("%d %d %lld",&n,&m,&t);
    fflush(stdin);
    scanf("%c",&f);
    if(0<n && n<1000 && 0<m && m<1000 && n<t && m<t && 1<t && t<1000000000)
    {
        if(f == 'L')
        {
            for(i=1; i<t+1; i++)
            {
                j=j+n;
                if(j>t)
                {
                    s = 'L';
                    break;
                }
                j=j+m;
                if(j>t)
                {
                    s = 'R';
                    break;
                }
            }
        }
        else if(f == 'R')
        {
            for(i=1; i<t+1; i++)
            {
                j=j+m;
                if(j>t)
                {
                    s = 'R';
                    break;
                }
                j=j+n;
                if(j>t)
                {
                    s = 'L';
                    break;
                }
            }
        }
    }
    printf("%c",s);
    return 0;
}
