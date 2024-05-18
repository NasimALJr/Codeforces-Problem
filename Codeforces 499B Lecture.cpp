#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>>pr;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        pr.push_back({a,b});
    }
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    vector<string>res;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i]==pr[j].first)
               {
                   if(pr[j].first.size()<=pr[j].second.size())
                   {
                       res.push_back(pr[j].first);
                   }
                   else
                   {
                       res.push_back(pr[j].second);
                   }
               }
        }
    }
    for(auto x:res)
    {
        cout<<x<<" ";
    }

}
