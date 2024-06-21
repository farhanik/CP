#include <bits/stdc++.h>

using namespace std;

int maximum(int a, int b, int c)
{
    int First = abs(a - b);
    int MaiorAB = (a + b + First) / 2;
    int Second = abs(MaiorAB-c);
    int MaiorAB1 = (c+MaiorAB+Second)/2;

    return MaiorAB1;
}

int main()
{
   int A, B, C;

   cin >> A >> B >> C;
    
   int M=maximum(A,B,C);
    
   cout<<M<<" eh o maior"<<"\n";

    return 0;
}
    