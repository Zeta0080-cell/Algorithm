//acwing800-����Ԫ�ص�Ŀ���(�Ż�) 
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],b[N];

int main()
{
    int n,m,x;//Ŀ��ֵ
    cin>>n>>m>>x;//A��,B����Ŀ��ֵ 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    } 
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(int i=0,j=m-1;i<n;i++)
    {
        while(j>=0&&a[i]+b[j]>x)
        {
            j--;
        }
        if(j>=0 && a[i]+b[j]==x)  // ���j>=0�ı߽���
        {
            printf("%d %d\n",i,j);
            break;  // �����Ŀ��֤Ψһ����Լ�break������ȥ��
        }
    }
    return 0;
}

