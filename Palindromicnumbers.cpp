#include<bits/stdc++.h>

using namespace std;



int main()
{
    int T,n,givennum,r,l;
    cin>>T;

    for(int i=0 ; i<T; i++)
    {
        cin>>n;
        givennum=n;
        l=0;
        while(n !=0)
        {
            r=n%10;
            l=l*10+r;
            n=n/10;
        }
        if(givennum==l)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }

    

    }

       


    }

