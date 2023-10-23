#include <stdio.h>
int main ()
{
    char ch[1000];
    gets(ch);
    if(ch[0]>=65 && ch[0]<=90)
    {
        printf("%s",ch);
    }
    else if(ch[0]>=97 && ch[0]<=122)
    {
        ch[0]=ch[0]-32;
        printf("%s",ch);
    }
    return 0;
}

