//Âå¹È1998-ÃÝ´Î·½ 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string toRepresentation(int n) {
    if (n == 0) return "0";
    if (n == 1) return "";
    if (n == 2) return "2";
    
    vector<int> exponents;
    int index = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            exponents.push_back(index);
        }
        n /= 2;
        index++;
    }
    
    string result;
    for (int i = exponents.size() - 1; i >= 0; i--) {
        int exp = exponents[i];
        string expStr;
        if (exp == 0) {
            expStr = "0";
        } else if (exp == 1) {
            expStr = "";
        } else {
            expStr = toRepresentation(exp);
        }
        
        if (exp == 1) {
            result += "2";
        } else {
            result += "2(" + expStr + ")";
        }
        
        if (i > 0) {
            result += "+";
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << toRepresentation(n) << endl;
    return 0;
}
