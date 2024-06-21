#include <iostream>
#include <vector>

using namespace std;

int knapsack(int N, int W, const vector<int> &weights, const vector<int> &values)
{
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {

            if (weights[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {

                dp[i][j] = max(dp[i - 1][j], values[i - 1] + dp[i - 1][j - weights[i - 1]]);
            }
        }
    }

    return dp[N][W];
}

int main()
{
    int N, W;
    cin >> N >> W;

    vector<int> weights(N), values(N);
    for (int i = 0; i < N; i++)
    {
        cin >> weights[i] >> values[i];
    }

    cout << knapsack(N, W, weights, values) << endl;

    return 0;
}