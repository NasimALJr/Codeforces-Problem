#include <stdio.h>
int main ()
{
    char a[100];
    int seen[256]={0};
    int count=0;
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(seen[a[i]]==0)
        count++;
        seen[a[i]]=1;
    }
    if(count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
