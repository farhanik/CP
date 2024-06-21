#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long int  side1, side2, side3;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> side1 >> side2 >> side3;

        if (side1 >= (side2 + side3) || side2 >= (side3 + side1) || side3 >= (side1 + side2))
        {
            cout << "Case " << i << ": Invalid"
                 << "\n";
        }
        else if (side1 == side2 && side2 == side3)
        {
            cout << "Case " << i << ": Equilateral"
                 << "\n";
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            cout << "Case " << i << ": Isosceles"
                 << "\n";
        }
        else
        {
            cout << "Case " << i << ": Scalene"
                 << "\n";
        }
    }

    return 0;
}