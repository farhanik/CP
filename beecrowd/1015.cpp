#include<bits/stdc++.h>

using namespace std;

int main()
{
    float x1,y1,x2,y2;

    cin>>x1>>y1;
    cin>>x2>>y2;

    double first = pow((x2-x1),2);
    double second = pow((y2-y1),2);

    double distance=sqrt(first+second);

    cout<< fixed << setprecision(4);

    cout<<distance<<"\n";

    return 0;
}