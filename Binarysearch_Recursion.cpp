#include<bits/stdc++.h>
using namespace std;

int bsearch(int l, int h, int arr[], int value)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        if (arr[mid] > value)
        {
            return bsearch(l, mid - 1, arr, value); 
        }
        else
        {
            return bsearch(mid + 1, h, arr, value); 
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "size of the array: ";
    cin >> n;

    int arr[n];

    cout << "elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "value to search: ";
    cin >> x;

    int result = bsearch(0, n - 1, arr, x); 

    if (result == -1) {
        cout << "Element is not present in array" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }

    return 0;
}
