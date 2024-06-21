#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_items,total_people;
    cin >> num_items >> total_people;

    vector<int> items(num_items);

    for (int i = 0; i <num_items ; i++)
    {
        
        cin >> items[i];
    }

    sort(items.begin(), items.end(), greater<int>());

    int sum = 0, count = 0;
    for (int item : items)
    {
        
        if(sum+item <= total_people)
        {
        while (sum <= total_people)
        {
            sum += item;
            
        }
        
        sum = sum - item;
        count++;
        }
        if (sum == 90)
        {
            break;
        }
      
    }
    if(count==1)
    {    
        cout << "Tami will be back after " << count << " day" << "\n";  
    }
    else
    {
    cout << "Tami will be back after " << count << " days" << "\n";
    }
    return 0;
}