//牛客109A-直角三角形 
#include<bits/stdc++.h>
using namespace std;

bool check(int x1, int y1, int x2, int y2, int x3, int y3) 
{
    long long d1 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    long long d2 = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);
    long long d3 = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
    return (d1 > 0 && d2 > 0 && d3 > 0) && 
           (d1 + d2 == d3 || d2 + d3 == d1 || d3 + d1 == d2);
}

int main() 
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ox = 0, oy = 0;
    if (check(ox, oy, x1, y1, x2, y2) ||check(x1, y1, ox, oy, x2, y2) ||check(x2, y2, ox, oy, x1, y1)) 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }
    return 0;
}
