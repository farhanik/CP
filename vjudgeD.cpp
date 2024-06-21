#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    string s;
    string s1 = "HELLO";
    string s2 = "HOLA";
    string s3 = "HALLO";
    string s4 = "BONJOUR";
    string s5 = "CIAO";
    string s6 = "ZDRAVSTVUJTE";

    while (true)
    {
        i++;
        getline(cin, s);

        if (s == "#")
        {
            break;
        }

        if (s == s1)
        {
            cout << "Case " << i << ": ENGLISH"
                 << "\n";
        }
        else if (s == s2)
        {
            cout << "Case " << i << ": SPANISH"
                 << "\n";
        }
        else if (s == s3)
        {
            cout << "Case " << i << ": GERMAN"
                 << "\n";
        }
        else if (s == s4)
        {
            cout << "Case " << i << ": FRENCH"
                 << "\n";
        }
        else if (s == s5)
        {
            cout << "Case " << i << ": ITALIAN"
                 << "\n";
        }
        else if (s == s6)
        {
            cout << "Case " << i << ": RUSSIAN"
                 << "\n";
        }
        else
        {
            cout << "Case " << i << ": UNKNOWN"
                 << "\n";
        }
    }

    return 0;
}


/*int main()
{
    int i = 0;
    char s[14];
    char s1[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char s2[] = {'H', 'O', 'L', 'A', '\0'};
    char s3[] = {'H', 'A', 'L', 'L', 'O', '\0'};
    char s4[] = {'B', 'O', 'N', 'J', 'O', 'U', 'R', '\0'};
    char s5[] = {'C', 'I', 'A', 'O', '\0'};
    char s6[] = {'Z', 'D', 'R', 'A', 'V', 'S', 'T', 'V', 'U', 'J', 'T', 'E', '\0'};

    while (true)
    {
        i++;
        gets(s);

        if (s[0] == '#')
        {
            break;
        }
        
        
        int D = strcmp(s,s1);
        int D1 = strcmp(s,s2);
        int D2 = strcmp(s,s3);
        int D3 = strcmp(s,s4);
        int D4 = strcmp(s,s5);
        int D5 = strcmp(s,s6);
        if (D == 0)
        {
            cout << "Case " << i << ": ENGLISH"
                 << "\n";
        }
        if (D1 == 0)
        {
            cout << "Case " << i << ": SPANISH"
                 << "\n";
        }
        else if (D2 == 0)
        {
            cout << "Case " << i << ": GERMAN"
                 << "\n";
        }
        else if (D3 == 0)
        {
            cout << "Case " << i << ": FRENCH"
                 << "\n";
        }
        else if (D4 == 0)
        {
            cout << "Case " << i << ": ITALIAN"
                 << "\n";
        }
        else if (D5 == 0)
        {
            cout << "Case " << i << ": RUSSIAN"
                 << "\n";
        }
    }

    return 0;
}*/


 
