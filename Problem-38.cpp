// Problem Link-
// https://codeforces.com/problemset/problem/289/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n,m,d;
    cin>>n>>m>>d;
    long ar[n][m];
    unordered_set<long> st;
    for(long i=0;i<n;i++)
    {
        for(long j=0;j<m;j++)
        {
            cin>>ar[i][j];
            st.insert(ar[i][j]);
        }
    }
    vector<long> moves;
    int f=0;
        for(auto x:st)
        {
           	long count=0;
            for(long i=0;i<n;i++)
            {
                for(long j=0;j<m;j++)
                {
                    if(ar[i][j]==x) count+=0;
                    else if(ar[i][j]>x)
                    {
                        long val;
                        val=(ar[i][j]-x)/d;
                        if((x+val*d)!=ar[i][j])
                        {
                            count=-1;
                            break;
                        }
                        else
                        {
                            count+=val;
                        }
                    }
                    else
                    {
                        long val;
                        val=(x-ar[i][j])/d;
                        if((ar[i][j]+val*d)!=x)
                        {
                            count=-1;
                            break;
                        }
                        else
                        {
                            count+=val;
                        }
                    }
                }
                if(count==-1) break;
            }
            moves.push_back(count);
        }
    	sort(moves.begin(),moves.end());
        for(long i=0;i<moves.size();i++)
        {
            if(moves[i]!=-1)
            {
                f=1;
                cout<<moves[i];
                break;
            }
        }
    if(f==0) cout<<-1;
	return 0;
}

