#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X;
    float Y;

    cin >> X;
    cin >> Y;

    float av = (X / Y);

    cout << fixed << setprecision(3) << av << " km/l"
         << "\n";

    return 0;
}