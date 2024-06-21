#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {100, 50, 20, 10, 5, 2, 1};

    int in;
    double count_note;
    cin >> in;

    cout << in << "\n";

    for(int i = 0; i < 7; i++)
    {
         count_note = in / arr[i];
        in = in - (count_note * arr[i]);
        cout << count_note << " nota(s) de R$ " << arr[i] << ",00" << "\n";
    }
    return 0;
}
