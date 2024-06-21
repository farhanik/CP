#include<bits/stdc++.h>


using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int>v(N);

    for(int  i=0; i<N ;  i++)
        cin>>v[i];

    
   sort(v.begin(),v.end(), greater<int>());
   
   cout<<"Shortlisted Candidates :"<<"\n";

   for(int i=0 ; i<3 ; i++)
   {
      cout<<v[i]<<" ";
   }
 
 return 0;
    
}