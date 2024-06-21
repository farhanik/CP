#include <bits/stdc++.h>

using namespace std;


void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(char *letters, int start, int N, int K, int &count) {
    if (start == N) {
        for (int i = 0; i < N; i++) {
            cout << letters[i];
        }
        cout << "\n";

        count++;

        if (count == K) {
            return;
        }
    }

    for (int i = start; i < N && count < K; i++) {
        swap(letters[start], letters[i]);
        generatePermutations(letters, start + 1, N, K, count);
        swap(letters[start], letters[i]);
    }
}


int main() {
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; caseNumber++) {
        int N, K;
        cin >> N >> K;
        cout << "Case " << caseNumber << " :\n";
        char letters[26];
        for (int i = 0; i < 26; i++) {
            letters[i] = 'A' + i;
        }

        sort(letters, letters + N);  

        int count = 0;
        generatePermutations(letters, 0, N, K, count);
    }

    return 0;
}

//void generatePermutations(char *letters, int start, int N, int K, int &count) {
    if (start == N) {
        
        for (int i = 0; i < N; i++) {
            cout << letters[i];
        }
        cout << "\n";

        count++;

        if (count == K) {
            return;
        }
    }

    int i = start;
    while (i < N && count < K) {
        swap(letters[start], letters[i]);
        generatePermutations(letters, start + 1, N, K, count);
        swap(letters[start], letters[i]);
        i++;
    }
}