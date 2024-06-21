#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

int main()
{

     int X,Y;
     cin>>X>>Y;
     float t_price;
     if(X<=5 && X>0)
     {
        switch (X)
        {
        case 1:
             t_price=((4.00)*Y);
            break;
        case 2:
            t_price=((4.50)*Y);
           break;
        case 3:
           t_price=((5.00)*Y);
           break;
        case 4:
           t_price=((2.00)*Y);
           break;
        case 5:
           t_price=((1.50)*Y);
           break;    
        default:
            break;
        }
        cout<<"Total: R$ "<< fixed << setprecision(2)<<t_price<<"\n";
     }
}
