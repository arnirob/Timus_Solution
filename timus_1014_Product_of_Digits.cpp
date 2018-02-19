#include<bits/stdc++.h>
#define test cout<<"fuck"<<endl;
using namespace std;
int main()
{
    int n;
    long long x,c;
    scanf("%d",&n);
    if(n==0) puts("10");
    else if(n<=9) printf("%d\n",n);
    else
    {
        int arr[100],f=1,v=0;
        while(n!=1 && f)
        {
            f=0;
            for(int i=9; i>1; i--)
            {
                if(n%i==0)
                {
                    arr[v++]=i;
                    n/=i;
                    f=1;
                    break;
                }
            }
        }
        if(f) for(int i=(v-1);i>=0;i--) cout<<arr[i];
        else cout<<"-1";
        puts("");
    }
    return 0;
}
