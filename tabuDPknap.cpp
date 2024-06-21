#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll knapsack(int W, vector<int> &wt, vector<int> &val, vector<vector<ll>> &dp, int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if (w >= wt[i - 1])
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wt[i - 1]] + val[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][W];
}

int main()
{
    int n, W;
    cin >> n >> W;

    vector<int> wt(n), val(n);

    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, 0));

    ll max_value = knapsack(W, wt, val, dp, n);

    cout << max_value << endl;

    return 0;
}