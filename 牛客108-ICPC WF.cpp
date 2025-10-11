//牛客108-ICPC WF
#include <iostream>
using namespace std;

int main() 
{
    int s, s1, s2, s3;
    cin >> s >> s1 >> s2 >> s3;
    // 判断是否没过四级并且至少挂了一门课
    if (s < 425 && (s1 < 60 || s2 < 60 || s3 < 60)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
