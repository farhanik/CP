#include <bits/stdc++.h>

using namespace std;

int main()
{

    int TC, tc, k, n, x, i;
    cin >> TC;
    tc = 1;
    
    while (TC >= tc)
    {
        cout << "Case " << tc << ":" << endl;
        cin >> n >> k;

        
        char ch[n + 1];

        for (i = 0; i < n; i++)
        {
            ch[i] = 'A' + i;
        }
        ch[i] = '\0'; 

        x = 0;
        do
        {
            for (i = 0; i < n; i++)
            {
                cout<< ch[i];
            }
            cout << endl;
            x++;
        } 
        while (next_permutation(ch, ch + n) && x < k);
        tc++;
    }
    return 0;
}
