#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min = 9999;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        else if(a[i]<min)
        {
            min = a[i];
        }
    }
    int indexmax;
    int indexmin;
    for(int i=0;i<n;i++)
    {
        if(max==a[i])
        {
            indexmax = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(min==a[i])
        {
            indexmin = i;
            break;
        }
    }
    int posmax = indexmax+1;
    int posmin = indexmin+1;
    if(posmax<posmin)
    {
        cout<<posmax-1+n-posmin<<endl;
    }
    else if(posmax>posmin)
    {
        cout<<posmax-1+n-posmin-1<<endl;
    }
    return 0;
}
