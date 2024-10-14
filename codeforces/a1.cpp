#include <iostream>
#include <cmath>


using namespace std;

struct D //to take three variables in one array index
{
    int x, y, z;
};


int main() {
    int t;
    cin >> t;


     D points[t];//array is faster than vector

    for (int i = 0; i < t; i++) {
        cin >> points[i].x >> points[i].y >> points[i].z;
    }

   int sum_x = 0;
   int sum_y = 0;
   int sum_z = 0;

   for (int i = 0; i < t; i++) {
    sum_x += points[i].x;
    sum_y += points[i].y;
    sum_z += points[i].z;
   }

   if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
    cout << "YES" << endl;
   } else {
    cout << "NO" << endl;
   }

    return 0;
}