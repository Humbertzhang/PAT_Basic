#include <stdio.h>

int main(void)
{
    long  a[100],b[100],c[100],total,i=0;
    scanf("%ld",&total);
    for (i;i<total;i++)
    {
     scanf("%ld %ld %ld",&a[i],&b[i],&c[i]);
    }
    for (i = 0;i<total;i++)
    {
     if (a[i]+b[i] > c [i])
        printf("Case #%ld: true\n",i+1);
     else 
        printf("Case #%ld: false\n",i+1);
    }
    return 0;
}
