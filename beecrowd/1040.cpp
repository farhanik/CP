#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n1, n2, n3, n4;
    cout << fixed << setprecision(1);
    cin >> n1 >> n2 >> n3 >> n4;

    float av, oex, f;

    float h1 = (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1);
    float h2 = (2 + 3 + 4 + 1);

    av = (h1 / h2);
   
    cout << "Media: " << fixed << setprecision(1) << av << "\n";
    if (av >= 7.0)
    {
        cout << "Aluno aprovado."
             << "\n";
    }
    else if (av < 5.0)
    {
        cout << "Aluno reprovado."
             << "\n";
    }
    if (av >= 5.0 && av <= 6.9)
    {
        cout << "Aluno em exame."
             << "\n";
        cin >> oex;

        f = (av + oex) / 2;
        cout << "Nota do exame: " << fixed << setprecision(1) << oex << "\n";

        if (f >= 5.0)
        {
            cout << "Aluno aprovado."
                 << "\n";
            cout << "Media final: " << fixed << setprecision(1) << f << "\n";
        }
        else
        {
            cout << "Aluno reprovado."
                 << "\n";
            cout << "Media final: " << fixed << setprecision(1) << f << "\n";
        }
    }
}
