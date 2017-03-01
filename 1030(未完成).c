#include <stdio.h>
int main()
{
    unsigned long long num,p;              //输入正整数的个数 正整数p
    scanf("%llu %llu",&num,&p);
    unsigned long long a[num],i,num2;
    num2 = num;
    for(i=0;i<num2;i++){
        scanf("%llu",&a[i]);
    }
    unsigned long long max=0;
    for(i=0;i<num2;i++){
        if (max <= a[i])
            max = a[i];
    }                            //最大值
    unsigned long long b[num],j=0;
    for(i=0;i<num2;i++){
        b[i] = p*a[i];
        if(b[i] >= max&&a[i]!=max){
            j++;
        }
    }                            //找到所有可以构成完美数列的数
    j++;                         //加上最大值本身
    printf("%llu",j);
    return 0;
}

