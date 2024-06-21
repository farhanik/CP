#include<bits/stdc++.h>

using namespace std;

int main()
{
    double in;
    int count_note;
    int  count_coin;
    int in_cents;
    int arr[] = {10000, 5000, 2000, 1000, 500, 200};
    int arr1[] = {100, 50, 25, 10, 5, 1};

    cin >> in;
    
    in_cents = static_cast<int>(in * 100);

    cout << "NOTAS:" << endl;
    for(int i = 0; i < 6; i++)
    {
        count_note = (in_cents / arr[i]);
        in_cents = in_cents - (count_note * arr[i]);
        cout << count_note << " nota(s) de R$ " << fixed << setprecision(2) << arr[i] / 100.0 << endl;
    }

    cout << "MOEDAS:" << endl;
    for(int j = 0; j < 6; j++)
    {
        count_coin = (in_cents / arr1[j]);
        in_cents = in_cents - (count_coin * arr1[j]);
        cout << count_coin << " moeda(s) de R$ " << fixed << setprecision(2) << arr1[j] / 100.0 << endl;
    }

    return 0;
}
