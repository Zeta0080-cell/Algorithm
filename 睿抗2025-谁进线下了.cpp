//�2025-˭�������� 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
    int t;//t������
    int n;//n������
    int s;//�ڶ�������������s��
    int r[N];//dս��һ��������õ�����
    int c[N];//dս�Ӹó��������ܷ�
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int countr=0;
        int countc=0;//dս��ÿ���������ܷ�
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&r[i],&c[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(r[i]==1)
            {
                countr++;
            }
            countc+=c[i];
        }
        if(n%2==0)
        {
            if(countr<(n/2)&&(countc-s)<50)
            {
                printf("0 0");
                printf("\n");
            }
            else if(countr<(n/2)&&(countc-s)>=50)
            {
                printf("0 1");
                printf("\n");
            }
            else if(countr>=(n/2)&&(countc-s)<50&&(countc-s)==50)
            {
                printf("1 0");
                printf("\n");
            }
            else if(countr>=(n/2)&&(countc-s)>=50&&(countc-s)==50)
            {
                printf("1 1");
                printf("\n");
            }
        }
        else if(n%2!=0)
        {
            if((countr<=n/2)&&(countc-s)<50)
            {
                printf("0 0");
                printf("\n");
            }
            else if(countr<=(n/2))&&(countc-s)>=50)
            {
                printf("0 1");
                printf("\n");
            }
            else if(countr>(n/2)&&(countc-s)<50&&(countc-s)==50)
            {
                printf("1 0");
                printf("\n");
            }
            else if(countr>(n/2)&&(countc-s)>=50&&(countc-s)==50)
            {
                printf("1 1");
                printf("\n");
            }
        }
    }
    return 0;
}
