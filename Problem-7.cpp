// Problem Link-
// https://codeforces.com/problemset/problem/499/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n,m;
    cin>>n>>m;
    vector<pair<string,string>> pr;
    vector<string> ans;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        pr.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        for(int j=0;j<m;j++)
        {
            if(x==pr[j].first)
            {
                string a=pr[j].first;
                string b=pr[j].second;
                if(a.length()<=b.length()) ans.push_back(a);
                else ans.push_back(b);
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
	return 0;
}
