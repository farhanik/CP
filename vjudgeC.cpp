#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    
    while (true)
    {
        cin >> n;

        
        if (n == 0)
            break;

        int sq = (n * (n + 1) * (2 * n + 1)) / 6;
        cout << sq << "\n";
    }

    return 0;
}
