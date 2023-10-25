#include <stdio.h>
int main() {
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b>a && c>a && d>a)
    printf("3\n");
    else if(b>a && c>a && d<a)
    printf("2\n");
    else if(b>a && c<a && d>a)
    printf("2\n");
    else if(b<a && c>a && d>a)
    printf("2\n");
    else if(b<a && c<a && d>a)
    printf("1\n");
    else if(b>a && c<a && d<a)
    printf("1\n");
    else if(b<a && c>a && d<a)
    printf("1\n");
    else if(b<a && c<a && d<a)
    printf("0\n");
    }
    return 0;
}
