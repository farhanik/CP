#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> N = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    int V;
    cin >> V;

    sort(N.begin(), N.end(), greater<int>());

    int t_num = 0;

    for (int coin : N)
    {
        int n = V / coin;
        V %= coin;

        if (n != 0)
        {
            t_num += n;
        }

        if (V == 0)
        {
            break;
        }
    }

    cout << t_num << endl;

    return 0;
}