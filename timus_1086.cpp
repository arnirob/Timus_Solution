#include<bits/stdc++.h>
using namespace std;

void num(int ks)
{
    int arr[15000];
    arr[0]=2;
    int num=1;
    for(int i=3; i<15000; i+=2)
    {
        bool flg=true;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0) flg=false;
        }
        if(flg)
        {
            arr[num]=i;
            num++;
        }
    }
    while(ks--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",arr[n-1]);
    }
}

int main()
{
    int ks;
    scanf("%d",&ks);
    num(ks);
    return 0;
}
