#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
       int bun, bpt, cpt, bp, cp;
        cin >> bun >> bpt >> cpt;
        cin >> bp >> cp;


        int profit = 0;

        while (bun >= 2)
        {
            if (bp > cp)
            {
                if (bpt != 0)
                {
                    profit += bp;
                    bpt--;
                }
                else if (cpt != 0)
                {
                    profit += cp;
                    cpt--;
                }
            }
            else
            {
                if (cpt != 0)
                {
                    profit += cp;
                    cpt--;
                }
                else if (bpt!= 0)
                {
                    profit += bp;
                    bpt--;
                }
            }
            bun = bun - 2;
        }

        cout << profit << "\n";
    }
    return 0;
}