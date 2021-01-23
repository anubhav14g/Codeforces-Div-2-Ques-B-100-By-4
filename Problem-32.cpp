// Problem Link-
// https://codeforces.com/problemset/problem/4/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int d,total;
    cin>>d>>total;
    int ar[d][2];
    int ma=0,mi=0;
    for(int i=0;i<d;i++)
    {
        cin>>ar[i][0]>>ar[i][1];
        ma+=ar[i][1];
        mi+=ar[i][0];
    }
    if(total>=mi && total<=ma)
    {
        cout<<"YES"<<endl;
        if(total==mi)
        {
            for(int i=0;i<d;i++)
            {
                cout<<ar[i][0]<<" ";
            }
        }
        else if(total==ma)
        {
            for(int i=0;i<d;i++)
            {
                cout<<ar[i][1]<<" ";
            }
        }
        else
        {
            int check[d],sum=0;
            for(int i=0;i<d;i++)
            {
                check[i]=ar[i][0];
                sum+=ar[i][0];
            }
            int f=1;
            while(f==1)
            {
                f=0;
                for(int i=0;i<d;i++)
                {
                    if(sum!=total)
                    {
                        f=1;
                        int val=check[i];
                        if((val+1)<=ar[i][1])
                        {
                            check[i]+=1;
                            sum+=1;
                        }
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
            }
            for(int i=0;i<d;i++)
            {
               	cout<<check[i]<<" ";
            }
        }
    }
    else cout<<"NO";
	return 0;
}



