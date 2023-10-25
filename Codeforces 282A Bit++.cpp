#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,sum=0;
    cin >> a;
    while(a--)
    {
        string b;
        cin >> b;
        if(b=="x++" || b=="++x" || b=="X++" || b=="++X" )
            sum=sum+1;
        else if(b=="x--" || b=="--x" || b=="X--" || b=="--X")
            sum=sum-1;
    }
    cout << sum;
    return 0;
}
