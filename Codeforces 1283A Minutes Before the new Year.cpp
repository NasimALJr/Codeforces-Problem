#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(1440-(60*a+b))<<endl;
    }
    return 0;
}
