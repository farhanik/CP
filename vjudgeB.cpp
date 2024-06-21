#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int l, w, h;

    for (int i = 1; i <= t; i++)
    {
        cin >> l >> w >> h;

        if (l <= 20 && w <= 20 && h <= 20)
        {
            cout << "Case " << i << ": good" << endl;
        }
        else
        {
            cout << "Case " << i << ": bad" << endl;
        }
    }
    return 0;
}
