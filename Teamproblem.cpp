#include<iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        int inp[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> inp[i];
        }

        int st = 0;
        for (int i = 0; i < 3; i++)
        {
            if (inp[i] == 1)
            {
                st++;
            }
        }

        if (st >= 2)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
