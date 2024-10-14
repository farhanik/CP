#include<bits/stdc++.h>

using namespace std;

int linear_search(int array[], int n, int x) {
    if (n < 0) {
        return -1; 
    }

    if (array[n] == x) {
        return n; 
    }

    return linear_search(array, n - 1, x); 
}

int main() {
    int array[] = {2, 4, 0, 1, 9};
    int x = 1;
    int n = sizeof(array) / sizeof(array[0]);

    int f = linear_search(array, n - 1, x);

    if (f == -1) {
        cout << "Value not found";
    } else {
        cout << "Value found at index " << f;
    }

    return 0;
}


int linear_search(int array[], int start, int end, int x) {
    if (start > end) {
        return -1; 
    }

    if (array[start] == x) {
        return start; 
    }

    return linear_search(array, start + 1, end, x); 
}


