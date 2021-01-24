// Problem Link-
// https://codeforces.com/problemset/problem/352/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    long ar[n];
    unordered_map<long,long> mp1,mp2,diff,check;
    vector<pair<long,long>> pr;
    for(long i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(long i=0;i<n;i++)
    {
        check.insert({ar[i],1});
        diff.insert({ar[i],0});
    }
    for(long i=0;i<n;i++)
    {
        if(check[ar[i]]==1)
        {
            if(mp1[ar[i]]==0)
            {
                mp2[ar[i]]=i+1;
            }
            else if(mp1[ar[i]]==1)
            {
                diff[ar[i]]=(i+1)-mp2[ar[i]];
                mp2[ar[i]]=i+1;
            }
            else
            {
                if(((i+1)-mp2[ar[i]])==diff[ar[i]])
                {
                    mp2[ar[i]]=i+1;
                }
                else
                {
                    check[ar[i]]=0;
                }
            }
        }
        ++mp1[ar[i]];
    }
    for(auto x:check)
    {
        if(x.second==1)
        {
            pr.push_back(make_pair(x.first,diff[x.first]));
        }
    }
    sort(pr.begin(),pr.end());
    cout<<pr.size()<<endl;
    for(long i=0;i<pr.size();i++)
    {
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }
	return 0;
}




