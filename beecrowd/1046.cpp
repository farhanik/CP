#include <iostream>

using namespace std;

int main() {
    int s, e, D;
    cin >> s >> e;

    if (s == e) {
        D = 24;
    } else if (s < e) {
        D = e - s;
    } else {
        D = 24 - (s - e);
    }

    cout << "O JOGO DUROU " << D << " HORA(S)" << "\n";

    return 0;
}
