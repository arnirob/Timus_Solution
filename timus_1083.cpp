#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total=1;
    string k;
    cin>>n>>k;
    int x=k.length();
    while(n>0)
    {
        total*=n;
        n-=x;
    }
    cout<<total<<endl;
    return 0;
}
