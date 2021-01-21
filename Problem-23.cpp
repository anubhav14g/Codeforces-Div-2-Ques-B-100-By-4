// Problem Link-
// https://codeforces.com/problemset/problem/469/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int p,q,l,r;
  	cin>>p>>q>>l>>r;
    vector<pair<int,int>> pr1,pr2;
    for(int i=0;i<p;i++)
    {
        int a,b;
        cin>>a>>b;
        pr1.push_back(make_pair(a,b));
    }
    for(int i=0;i<q;i++)
    {
        int c,d;
        cin>>c>>d;
        pr2.push_back(make_pair(c,d));
    }
    int count=0;
    for(int i=l;i<=r;i++)
    {
        int f=0;
        for(int j=0;j<pr2.size();j++)
        {
            int c=pr2[j].first+i;
            int d=pr2[j].second+i;
            for(int k=0;k<pr1.size();k++)
            {
                int a=pr1[k].first;
                int b=pr1[k].second;
                if((a>=c && a<=d) || (b>=c && b<=d) || (c>=a && c<=b) || (d>=a && d<=b))
                {
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        if(f==1) ++count;
    }
    cout<<count;
	return 0;
}

