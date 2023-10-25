#include <stdio.h>
int main ()
{
    int n,count=0;
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==a[i+1])
        count++;
    }
    printf("%d",count);
    return 0;
}
