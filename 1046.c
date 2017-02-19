#include <stdio.h>

int main()
{
    int times,a1,a2,awine=0,b1,b2,bwine=0;
    scanf("%d",&times);
    for (times;times>0;times --)
    {
     scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
     if (a2 != a1 + b1&&b2 == a1 +b1)
     awine ++;
     if (b2 != a1 + b1&&a2 == a1+b1)
     bwine ++;
    }
    printf("%d %d\n",awine,bwine);
    return 0;
}
