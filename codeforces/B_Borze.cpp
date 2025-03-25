#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    
    string result = "";
    
    // Iterate through the string
    for(int i = 0; i < s.length(); i++) 
    {
        if(s[i] == '.')
        {
            
            result += '0';
        }
        else if(s[i] == '-') 
        {
            
            if(s[i + 1] == '.')
            {
                
                result += '1';
                i++; 
            }
            else if(s[i + 1] == '-')
            {
                
                result += '2';
                i++; 
            }
        }
    }
    
    cout << result << endl;
    return 0;
}