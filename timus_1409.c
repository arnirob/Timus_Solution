#include<stdio.h>
int main()
{
    long long int h,l;
    while(scanf("%lld %lld",&h,&l)!=EOF)
    {
        printf("%lld %lld\n",10-h,10-l);
    }
    return 0;
}
