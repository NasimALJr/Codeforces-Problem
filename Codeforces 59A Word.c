#include <stdio.h>
int main ()
{
    char a[100];
    scanf("%s",&a);
    int b=0,c=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        b++;
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        c++;
    }
    for(int j=0;a[j]!='\0';j++)
    {
    if(b>c)
    {
        if(a[j]>='a' && a[j]<='z')
        {
            a[j]=a[j]-32;
        }
    }
    else
    {
        if(a[j]>='A' && a[j]<='Z')
        {
            a[j]=a[j]+32;
        }
    }
    }
    printf("%s\n",a);
    return 0;
}
