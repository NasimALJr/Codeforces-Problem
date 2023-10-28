#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=k)
        sum = sum + 1;
        else
        sum = sum +2;
    }
    cout<<sum;
}
