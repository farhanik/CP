#include<bits/stdc++.h>

using namespace std;

int main()
{
     double t_sec, hours, minutes;
     double H, M, S;

    cin >> t_sec;

    if (t_sec >= 60)
    {
        M = t_sec / 60;
        minutes = floor(M);
        S = (M - minutes) * 60;
        M=minutes;
    }
    else
    {
        S = t_sec;
        M=0;
    }

    if (minutes >= 60)
    {
        H = minutes / 60.0;
        hours = floor(H);
        M = (H - hours) * 60;
    }
    else
    {
        H = 0;
        hours = 0;
        
    }

    cout << hours <<":"<< M <<":"<< S <<"\n";

    return 0;
}
