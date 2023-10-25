#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char ch[100];
    for(int i=0; i<n; i++)
    {
        scanf("%s",&ch);
        if(strlen(ch)<=10)
            printf("%s\n",ch);
        else
            printf("%c%d%c\n",ch[0],strlen(ch)-2,ch[strlen(ch)-1]);
    }
    return 0;
}

