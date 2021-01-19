// Problem Link-
// https://codeforces.com/problemset/problem/276/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++) mp[s[i]]++;
    int count=0,even=0;
    for(auto x:mp)
    {
        if(x.second&1) ++count;
        else ++even;
    }
    if(count<=1)
    {
        cout<<"First";
    }
    else
    {
        if(count&1) cout<<"First";
        else cout<<"Second";
    }
	return 0;
}