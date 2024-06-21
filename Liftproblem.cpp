#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, M, L, i;
    cin >> T;

    for (i = 1; i <= T; i++)
    {
        cin >> M >> L;
        int lp = L;
        int mp = M;
        
         if (lp>=mp )
        {
            int Ttime2 =(4 * lp) + 19;
            cout << "Case " << i << ": " << Ttime2 << "\n";
        }
        else if(lp<mp)
        {
            int extm= (mp-lp)*4;
            int Ttime1 = (4 * mp) + 19+extm;
            cout << "Case " << i << " :" << Ttime1 << "\n";
        }

    }


    return 0;
}