#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int>v(1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            int diff = a[i+1]-a[i];
            v.push_back(diff);
        }
        int ct=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>1)
            {
                ct=1;
                break;
            }
        }
        if(ct>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
