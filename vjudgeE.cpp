/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double c, f,F,F1,C;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> c >> f;

         F = (9.0 / 5.0) * c + 32;
         F1 = (F - f);
         C = abs(((F1 - 32) * 5.0) / 9.0);

        cout << "Case " << i << ": " << fixed << setprecision(2) << C << "\n";
    }
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, i;
    double t, T1;
    cin >> T;

    for (i = 1; i <= T; i++)
    {

        cin >> t >> T1;

        t = t + 5.0 / 9.0 * T1;
        cout << fixed << setprecision(2);
        cout << "Case " << i << ": " << t << "\n";
    }
    return 0;
}
