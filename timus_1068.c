#include<stdio.h>
int main()
{
    long long int i,x,c=0;
    scanf("%lld",&x);
    if(x>0)
    {
      for(i=1;i<=x;i++)
        {
            c=c+i;
        }
    }
    else if(x<0)
    {
        for(i=1;i>=x;i--)
        {
             c=c+i;
        }
    }
   else
   {
       c=1;
   }
    printf("%lld\n",c);
    return 0;
}
