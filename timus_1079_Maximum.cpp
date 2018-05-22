#include<bits/stdc++.h>
#define mx 100000
using namespace std;
vector<int>arr;

int main()
{
    arr[0]=0;
    arr[1]=1;
    int x;
    for(int i=1;i<mx;i++)
    {
        x=2*i;
        arr.push_back(arr[i]);
        arr[x]=arr[i];
        arr[x+1]=arr[i]+arr[i+1];
        arr.push_back(arr[i]+arr[i+1]);
    }
    int n;
    while(scanf("%d",&n),n)
    {
        int big=INT_MIN;
        for(int i=1;i<=n;i++) if(arr[i]>big) big=arr[i];
        printf("%d\n",big);
    }
    return 0;
}
