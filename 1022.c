#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,d;
    int c;
    int i=0,j,bit[32];
    scanf("%d %d %d",&a,&b,&d);
    c = a+b;
    while(c!=0){
        bit[i++] = c%d;
        c/=d;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",bit[j]);
    }
    if(i==0){
        printf("0");
    }
    printf("\n");
    return 0;
}
