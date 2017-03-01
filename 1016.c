/*处理数字法*/

#include <stdio.h>

long long turn(long long num1,int num2);

int main()
{
    long long a,b,outa,outb,sum;
    int da,db;
    scanf("%lld %d %lld %d",&a,&da,&b,&db);
    outa = turn(a,da);
    outb = turn(b,db);
    sum = outa + outb;
    printf("%lld",sum);
}

long long turn(long long num1,int num2)
{
    int temp,output=0;
    while(num1!=0){
        temp = num1%10;
        if (temp == num2){
            output = output*10 + temp;
        }
        num1/=10;
    }
    return output;
}

