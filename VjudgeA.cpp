#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n1, n2;
   
    for(int i=0 ; i<t; i++)
    {
        cin >> n1 >> n2;
        if (n1 == n2)
        {
            cout << "="
                 << "\n";
        }
        else if (n1 > n2)
        {
            cout << ">"
                 << "\n";
        }
        else if (n1 < n2)
        {
            cout << "<"
                 << "\n";
        }
    }
    return 0;
}