// Problem Link-
// https://codeforces.com/problemset/problem/266/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    if(s.length()==1) cout<<s<<endl;
    else
    {
        int i;
        while(t--)
        {
            i=0;
            int f=0;
            while(i<s.length())
            {
                f=0;
                if((i+1)<s.length())
                {
                    if(s[i]=='B')
                    {
                        if(s[i+1]=='G')
                        {
                            s[i]='G';
                            s[i+1]='B';
                            f=1;
                        }
                    }
                }
                if(f==1) i+=2;
                else ++i;
            }
        }
        cout<<s<<endl;
    }
	return 0;
}