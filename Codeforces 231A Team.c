#include <stdio.h>
int main ()
{
    int n,l=0;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2)
            l++;
    }
    printf("%d\n",l);
    return 0;
}

