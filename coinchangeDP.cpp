#include <bits/stdc++.h>

using namespace std;

int noc(int amount, vector<int> coins, vector<int> &dp)
{
    if (amount == 0)
        return 0;
    if(dp[amount] != -1)
    {
        return dp[amount];
    }
    
    int ans = INT_MAX;
    for (int coin : coins)
    {
        if (amount - coin >= 0)
        {
            int curr = noc(amount - coin, coins,dp);
            if (curr != INT_MAX)
            {
                ans = min(ans, curr + 1);
            }
        }
    }
    return dp[amount] = (ans == INT_MAX ? INT_MAX : ans);
}

int main()
{
    int amount;
    cin >> amount;
    vector<int> coins = {50, 25, 20, 10, 5};
    vector<int>dp(1005,-1);
    int ans = noc(amount, coins,dp);
    if (ans == INT_MAX)
    {
        cout << "Not possible" << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}
