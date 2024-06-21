#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<double, double> &a, const pair<double, double> &b)
{
    return a.second > b.second;
}

double knapsack(int n, int w, const vector<double> &v, const vector<double> &wght)
{
    vector<pair<double, double>> items(n);
    for (int i = 0; i < n; i++)
    {
        items[i] = make_pair(wght[i], v[i] / wght[i]);
    }

    sort(items.begin(), items.end(), compare);

    double profit = 0;
    for (const auto &item : items)
    {
        if (w >= item.first)
        {
            profit += item.first * item.second;
            w -= item.first;
        }
        else
        {
            profit += w * item.second;
            break;
        }
    }

    return profit;
}

int main()
{
    int N, W;
    cin >> N >> W;

    vector<double> V(N);
    vector<double> Wg(N);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Wg[i];
    }

    double result = knapsack(N, W, V, Wg);
    cout << result << "\n";

    return 0;
}