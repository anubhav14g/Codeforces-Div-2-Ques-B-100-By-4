// Problem Link-
// https://codeforces.com/problemset/problem/122/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	string s;
    cin>>s;
    int f=0,count1=0,count2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4')
        {
            f=1;
            ++count1;
        }
        if(s[i]=='7')
        {
            f=1;
            ++count2;
        }
    }
    if(f==0) cout<<-1;
    else
    {
        if(count1>=count2) cout<<4;
        else cout<<7;
    }
	return 0;
}




