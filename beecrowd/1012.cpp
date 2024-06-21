#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

int main()
{

    float A, B, C;

    cin >> A >> B >> C;

    float Tr = 0.5 * (A * C);
    float Cir = (pi * (C * C));
    float Trap = 0.5 * (A + B) * C;
    float sq = (B * B);
    float rectan = (A * B);

    cout << "TRIANGULO: " << fixed << setprecision(3) << Tr << "\n";
    cout << "CIRCULO: " << fixed << setprecision(3) << Cir << "\n";
    cout << "TRAPEZIO: " << fixed << setprecision(3) << Trap << "\n";
    cout << "QUADRADO: " << fixed << setprecision(3) << sq << "\n";
    cout << "RETANGULO: " << fixed << setprecision(3) << rectan << "\n";

    return 0;
}
