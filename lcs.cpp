#include<bits/stdc++.h>

using namespace std;

int lcs(int i, int j, string &s1 , string & s2, vector<vector<int>>&dp)
{
    if(i<0 || j<0)
       return 0;

    if(dp[i][j] != -1)
        return dp[i][j];    
    int ans = lcs(i-1,j,s1,s2,dp);

    ans = max(ans,lcs(i, j-1,s1,s2,dp));

    ans = max(ans,lcs(i-1,j-1,s1,s2,dp)+ (s1[i]==s2[j]));

    return dp[i][j]=ans;
}


int main()
{
    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);

   
    
    int l1= s1.size();

    int l2= s2.size();

    vector<vector<int>>dp(l1,vector<int>(l2,-1));

    int ans=lcs(l1-1,l2-1,s1,s2,dp);

    cout<<ans;

    return 0;
    


     
}