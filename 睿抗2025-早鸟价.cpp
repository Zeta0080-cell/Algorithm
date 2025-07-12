#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;//表示n位参会者
    int m,d,c;//m月d日c元
    cin>>n;
    while(n--)
    {
        cin>>m>>d>>c;
        if(m>=8)
        {
            printf("Too late!");
            printf("\n");
        }
        else if(m==7&&d>11)
        {
            printf("Too late!");
            printf("\n");
        }
        else if(m==7&&d<=11&&c==2000)
        {
            printf("Ok!");
            printf("\n");
        }
        else if(m==7&&d<=11&&c>2000)
        {
            printf("^_^");
            printf("\n");
        }
        else if(m==7&&d<=11&&c<2000)
        {
            printf("Need more!");
            printf("\n");
        }
        else if(m==6&&d>20&&c==2000)
        {
            printf("Ok!");
            printf("\n");
        }
        else if(m==6&&d>20&&c>2000)
        {
            printf("^_^");
            printf("\n");
        }
        else if(m==6&&d>20&&c<2000)
        {
            printf("Need more!");
            printf("\n");
        }
        else if(m==6&&d<=20&&c==1800)
        {
            printf("Ok!");
            printf("\n");
        }
        else if(m==6&&d<=20&&c>1800)
        {
            printf("^_^");
            printf("\n");
        }
        else if(m==6&&d<=20&&c<1800)
        {
            printf("Need more!");
            printf("\n");
        }
        else if(m<6&&c==1800)
        {
            printf("Ok!");
            printf("\n");
        }
        else if(m<6&&c<1800)
        {
            printf("Need more!");
            printf("\n");
        }
        else if(m<6&&c>1800)
        {
            printf("^_^");
            printf("\n");
        }
    }
    return 0;
}
