#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll knapsack(int ind, int w, vector<int> &wt, vector<int> &val, vector<vector<ll>> &dp)
{
    if (w == 0)
        return 0;
    if (ind < 0)
        return 0;
        
    if (dp[ind][w] != -1)
        return dp[ind][w];

    ll ans = knapsack(ind - 1, w, wt, val, dp);

    if (w - wt[ind] >= 0)
        ans = max(ans, knapsack(ind - 1, w - wt[ind], wt, val, dp) + val[ind]);

    return dp[ind][w] = ans;
}

int main()
{
    int n, W;
    cin >> n >> W;

    vector<int> wt(n), val(n);

    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    vector<vector<ll>> dp(n, vector<ll>(W + 1, -1));

    ll m = knapsack(n - 1, W, wt, val, dp);

    cout << m << endl;

    return 0;
}