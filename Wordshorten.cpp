#include<iostream>
#include<string.h>

 
using namespace std;
 
int main()
{
    int line;
 
    cin>>line;
    
    for(int i=1; i<=line; i++)
    {
    char str[100];
    int count;
    cin >> str;
 
    int length = strlen(str);//Finding length of a string and must aware of headerfile.
    for (int i = 0; i < length; i++)
    {
        int asciiValue = (int)str[i];//How to find ascii value of a char for a string in C++
 
        if (97 <= asciiValue && asciiValue <= 122)//Double condition must be like this
        {
            continue;//usecase of this is to escape  form where it called for not runnig  a loop fully.
        }
        else
        {
            
            break;//To jump or can say that for ending loop it is used.
        }
    }
    if(length>10)
    {
        for(int i=1; i<length-2; i++)
        {
                count=i;
                count++;
        }
        cout<<str[0]<<count<<str[length-1]<<endl;
    }
    else
    {
        cout<<str<<endl;
    }
    }
 
 

 
    
}