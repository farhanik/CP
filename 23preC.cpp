#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> students;

    for (int i = 0; i < N; i++)
    {
        int id, marks;
        cin >> id >> marks;
        students.emplace_back(id, marks);
    }

    sort(students.begin(), students.end(), compare);

    int sum = 0;
    int counter = 0;

    for (const auto &pa : students)
    {
        if (counter < 3)
        {
            sum += pa.second;
            counter++;
        }
        else
        {
            break;
        }
    }

    if (sum < 150)
        cout << "Counseling Support Required" << "\n";
    else
    {
        cout << "Counseling Support Not Required" << "\n";
        counter = 0; 

        for (const auto &pa : students)
        {
            if (counter < 3)
            {
                cout << pa.second << " ";
                counter++;
            }
            else
            {
                break;
            }
        }
    }

    return 0;
}