#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,x,sum=0;
    scanf("%d",&k);
    int arr[k+4];
    for(int i=0;i<k;i++) scanf("%d",arr+i);
    sort(arr,arr+k);
    for(int i=0;i<(k/2)+1;i++) sum+=((arr[i]/2)+1);
    cout<<sum<<endl;
    return 0;
}

