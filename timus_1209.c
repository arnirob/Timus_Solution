#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x,p;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&p);
        x=((8*p)-7);
        n=sqrt(x);
        if(n*n==x) printf("1");
        else printf("0");
        printf(" ");
    }
    printf("\n");
    return 0;
}
