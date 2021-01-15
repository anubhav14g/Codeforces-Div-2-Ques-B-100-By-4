// Problem Link-
// https://codeforces.com/problemset/problem/447/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	string s;
    cin>>s;
    int k;
    cin>>k;
    int ar[26];
    map<char,int> pr;
    char ch='a';
    for(int i=0;i<26;i++)
    {
        cin>>ar[i];
        pr.insert({ch,ar[i]});
        ++ch;
    }
    long ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans+=(i+1)*pr[s[i]];
    }
    long start=s.length()+1;
    sort(ar,ar+26);
    for(int i=0;i<k;i++)
    {
        ans+=start*ar[25];
        ++start;
    }
    cout<<ans;
	return 0;
}



