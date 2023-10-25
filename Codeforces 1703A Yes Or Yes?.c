#include <stdio.h>
#include <string.h>
int main() {
     
    int t;
    char a[100];
    char b[]="YES";
    char c[]="yes";
    char d[]="Yes";
    char e[]="yeS";
    char f[]="yEs";
    char g[]="YEs";
    char h[]="yES";
    char i[]="YeS";
    scanf("%d",&t);
    while(t--)
    {
    scanf(" %s",&a);
    if(strcmp(a,b)==0)
    printf("YES\n");
    else if(strcmp(a,c)==0)
    printf("YES\n");
    else if(strcmp(a,d)==0)
    printf("YES\n");
    else if(strcmp(a,e)==0)
    printf("YES\n");
    else if(strcmp(a,f)==0)
    printf("YES\n");
    else if(strcmp(a,g)==0)
    printf("YES\n");
    else if(strcmp(a,h)==0)
    printf("YES\n");
    else if(strcmp(a,i)==0)
    printf("YES\n");
    else
    printf("NO\n");
    }
    return 0;
}
