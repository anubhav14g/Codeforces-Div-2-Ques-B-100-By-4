// Problem Link-
// https://codeforces.com/problemset/problem/448/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
bool isSubSequence(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
  
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSequence(str1, str2, m-1, n-1); 
  
    // If last characters are not matching 
    return isSubSequence(str1, str2, m, n-1); 
} 
 
int main()
{
	string s,t;
    cin>>s;
    cin>>t;
    unordered_map<char,int> mp1,mp2;
    for(int i=0;i<s.length();i++) mp1[s[i]]++;
    for(int i=0;i<t.length();i++) mp2[t[i]]++;
    int count=0,f=1;
    for(auto x:mp2)
    {
        if(mp1[x.first]>=x.second)
        {
            count+=(mp1[x.first]-x.second);
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==0) cout<<"need tree";
    else
    {
        if(count==0)
        {
            if(s.length()==t.length())
            {
                cout<<"array";
            }
            else
            {
                if(isSubSequence(t,s,t.length(),s.length()))
                {
                    cout<<"automaton";
                }
                else
                {
                    cout<<"both";
                }
            }
        }
        else
        {
            if(isSubSequence(t,s,t.length(),s.length()))
            {
                cout<<"automaton";
            }
            else
            {
                cout<<"both";
            }
        }
    }
	return 0;
}

