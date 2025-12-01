//Å£¿ÍÖÜÈü120 - B
#include <iostream>
using namespace std;

struct Count 
{
    long long a, b, c;
};

Count count_up_to(long long x) 
{
    long long full = x / 3;
    long long rem = x % 3;
    return {
        full + (rem >= 1),
        full + (rem >= 2),
        full
    };
}

int main() 
{
    long long l, r;
    cin >> l >> r;
    
    Count cnt_r = count_up_to(r);
    Count cnt_l_minus = count_up_to(l - 1);
    
    cout << cnt_r.a - cnt_l_minus.a << " "
         << cnt_r.b - cnt_l_minus.b << " "
         << cnt_r.c - cnt_l_minus.c << endl;
    
    return 0;
}
