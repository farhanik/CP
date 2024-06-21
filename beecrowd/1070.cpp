#include<bits/stdc++.h>

using namespace std;

int main()
{
    int in;

    cin >> in;
    int x = in;
    if(x%2==0)
    {
        x=x+1;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << x << "\n";
        x = x + 2;  
    }
    
    return 0;
}
