// Problem Link-
// https://codeforces.com/problemset/problem/285/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n,s,t;
    cin>>n>>s>>t;
    long ar[n+1];
    unordered_map<long,long> mp;
    unordered_set<long> st;
    for(long i=1;i<=n;i++)
    {
        cin>>ar[i];
        mp.insert({i,ar[i]});
    }
    st.insert(s);
    if(s==t) cout<<0;
    else
    {
        int f=0;
        long count=0,num=s;
        while(1)
        {
            long new_pos=mp[num];
            if(st.find(new_pos)==st.end())
            {
                ++count;
                num=new_pos;
                st.insert(new_pos);
                if(new_pos==t)
                {
                    f=1;
                    break;
                }
            }
            else break;
        }
        if(f==1) cout<<count;
        else cout<<-1;
    }
	return 0;
}