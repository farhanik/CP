#include<bits/stdc++.h>


using namespace std;

int LIS(int ind, vector<int> &v, vector<int>&dp)
{
       if(dp[ind] != -1)
       {
         return dp[ind];
       }
       int ans=1;
        for(int i=0 ; i<ind ; i++)
        {
             if(v[ind] > v[i])
             {
                 ans = max(ans, LIS(i ,v,dp)+1); 
             }
        }

        return dp[ind]=ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int>dp(n,-1);

    vector<int>v(n);
    int ans=0;
    for(int i=0; i<n ; i++)
    {
        cin>>v[i];
    }

    for(int i=0 ; i<n; i++)
    {
       ans= max(ans,LIS(i,v,dp));
    }

    cout<<ans;

    return 0;
}