//洛谷1030-求先序排列
//核心思路，用后序确定根。中序确定左右子树 
#include <bits/stdc++.h>
using namespace std;

void dfs(string in, string post) 
{
    if (in.empty()) return;
    
    // 后序遍历的最后一个字符是根
    char root = post[post.length() - 1];  // 用这个替代 post.back()
    cout << root;  // 先序：先输出根
    
    // 在中序中找到根的位置
    int pos = in.find(root);
    
    // 左子树的中序和后序
    string left_in = in.substr(0, pos);
    string left_post = post.substr(0, pos);
    
    // 右子树的中序和后序
    string right_in = in.substr(pos + 1);
    string right_post = post.substr(pos, post.length() - pos - 1);
    
    // 递归处理左子树和右子树
    dfs(left_in, left_post);
    dfs(right_in, right_post);
}

int main() 
{
    string in_order, post_order;
    cin >> in_order >> post_order;
    dfs(in_order, post_order);
    cout << endl;
    return 0;
}
