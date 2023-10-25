#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",&ch);
    int i=0,a=0,d=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='A')
            a++;
        if(ch[i]=='D')
            d++;
        i++;
    }
    if(a>d)
        printf("Anton");
    else if(d>a)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}

