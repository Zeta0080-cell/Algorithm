//牛客109C-整数三角形
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long dx = x2 - x1, dy = y2 - y1;
    long long xc, yc;
    xc = x1 + 1;
    yc = y1 + 2;
    if (xc == x2 && yc == y2) 
    {
        xc = x1 + 2; 
    }
    long long area2 = abs(dx * (yc - y1) - dy * (xc - x1));
    if (area2 < 2) 
    {
        yc = y1 + (2 / abs(dx) + 2);
        if (xc == x2 && yc == y2) 
        {
            xc++;
        }
    }
    cout << xc << " " << yc << endl;
    return 0;
} 
