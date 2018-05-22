#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<double> v;
    int j = 0;
    unsigned long long num;
    while (scanf("%llu",&num) != EOF)
    {
        v.push_back((double)sqrt(num*1.0));
        j++;
    }
    while(j--)
        printf("%.4lf\n",v[j]);

    return 0;
}
