//牛客挑战赛84 - A
#include<bits/stdc++.h>
using namespace std;

// 判断5张牌的类型：1=四连, 2=葫芦, 3=散牌
int getHandType(vector<int>& cards) {
    // 统计每种牌值的数量（牌值范围1-13）
    int count[14] = {0};
    for (int i = 0; i < 5; i++) {
        count[cards[i]]++;
    }
    
    // 判断四连
    for (int i = 1; i <= 13; i++) {
        if (count[i] >= 4) {
            return 1; // 四连
        }
    }
    
    // 判断葫芦
    int hasThree = 0, hasTwo = 0;
    for (int i = 1; i <= 13; i++) {
        if (count[i] == 3) hasThree = 1;
        if (count[i] == 2) hasTwo = 1;
    }
    if (hasThree && hasTwo) {
        return 2; // 葫芦
    }
    
    return 3; // 散牌
}

// 简化分数
void simplifyFraction(int &num, int &den) {
    int a = num, b = den;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int g = a;
    num /= g;
    den /= g;
}

int main() {
    int a[4], b[4];
    
    // 读取输入
    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &b[i]);
    }
    
    int total = 13 * 13; // 总可能情况
    int win = 0, draw = 0, lose = 0;
    
    // 枚举所有可能的抽牌情况
    for (int x = 1; x <= 13; x++) {       // 小红抽的牌
        for (int y = 1; y <= 13; y++) {   // 小紫抽的牌
            // 构造小红的手牌
            vector<int> handA;
            for (int i = 0; i < 4; i++) handA.push_back(a[i]);
            handA.push_back(x);
            
            // 构造小紫的手牌
            vector<int> handB;
            for (int i = 0; i < 4; i++) handB.push_back(b[i]);
            handB.push_back(y);
            
            // 判断手牌类型
            int typeA = getHandType(handA);
            int typeB = getHandType(handB);
            
            // 比较胜负
            if (typeA < typeB) {      // 类型编号越小越强
                win++;  // 小红赢
            } else if (typeA > typeB) {
                lose++; // 小红输
            } else {
                draw++; // 平局
            }
        }
    }
    
    // 简化分数并输出
    int winNum = win, winDen = total;
    int drawNum = draw, drawDen = total;
    int loseNum = lose, loseDen = total;
    
    simplifyFraction(winNum, winDen);
    simplifyFraction(drawNum, drawDen);
    simplifyFraction(loseNum, loseDen);
    
    printf("%d/%d %d/%d %d/%d\n", winNum, winDen, drawNum, drawDen, loseNum, loseDen);
    
    return 0;
} 
