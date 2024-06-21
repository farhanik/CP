#include<iostream>

using namespace std;

int main()
{
    int weight,parts;
    cin>>weight;
    parts = weight/2;
    if(weight%2==0)
    {
        if(parts==1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
   else
    {
     cout<<"NO";
    }
    return 0;
}