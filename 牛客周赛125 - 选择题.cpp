// 牛客周赛125 - 选择题
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    
    if(s1 == "ABD") {
        printf("4\n");
    } else {
        bool hasWrong = false;
        for(char c : s1) {
            if(c == 'C') {
                hasWrong = true;
                break;
            }
        }
        if(hasWrong) {
            printf("0\n");
        } else {
            printf("2\n");
        }
    }
    return 0;
} 
