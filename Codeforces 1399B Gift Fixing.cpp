#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a,b;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a.push_back(x);
        }
         for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            b.push_back(x);
        }
        ll minone = *min_element(a.begin(),a.end());
        ll mintwo = *min_element(b.begin(),b.end());
        ll sum=0;
        for(int i=0;i<n;i++)
        {

            ll val = max(a[i]-minone,b[i]-mintwo);
            sum+=val;

        }
        cout<<sum<<endl;
    }

    return 0;
}
