#include <iostream>
#include <cstdio>

using namespace std;

//求两个数的最大公约数
long long gcd(long long a,long long int b);
//按要求打印某分数
void print(long long a,long long b);
//加减乘除
void add(long long a,long long b,long long c,long long d);
void sub(long long a,long long b,long long c,long long d);
void multi(long long a,long long b,long long c,long long d);
void div(long long a,long long b,long long c,long long d);


int main()
{
    long long int a,b,c,d;
    scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
    add(a,b,c,d);
    sub(a,b,c,d);
    multi(a,b,c,d);
    div(a,b,c,d);
    return 0;
}

long long gcd(long long a,long long b)
{
    return b == 0 ? a:gcd( b , a % b );
}

void print(long long a,long long b)
{
    long long temp,flag = 0,c;  //flag 负数标记  c 整数部分
    if(a == 0){
        cout << "0";
        return;
    }
    else if(a<0){
        a = -a;
        flag = 1;
    }

    temp = gcd(a,b);  //先算出最大公约数，再算他们的最简形式
    a = a/temp;
    b = b/temp;
    c = a/b; //整数

    if(flag)  //负数
    {
        if (b == 1) //分母为1
            printf("(-%lld)",a);
        else if (c > 0)  //有整数部分
            printf("(-%lld %lld/%lld)",c,(a%b),b);
        else            //无整数部分
            printf("(-%lld/%lld)",a%b,b);
    }

    else    //正数
    {
        if(b == 1)
            printf("%lld",a);
        else if(c > 0)
            printf("%lld %lld/%lld",c,(a%b),b);
        else
            printf("%lld/%lld",a%b,b);
    }
}


void add(long long a,long long b,long long c,long long d)
{
    print(a,b);
    cout << " + " ;
    print(c,d);
    cout << " = ";
    print(a*d + b*c , b*d);
    cout << endl;
}

void sub(long long a,long long b,long long c,long long d)
{
    print(a,b);
    cout << " - ";
    print(c,d);
    cout << " = ";
    print(a*d-b*c,b*d);
    cout << endl;
}

void multi(long long a,long long b,long long c,long long d)
{
    print(a,b);
    cout << " * ";
    print(c,d);
    cout << " = ";
    print(a*c,b*d);
    cout << endl;
}

void div(long long a,long long b,long long c,long long d)
{
    print(a,b);
    cout << " / " ;
    print(c,d);
    cout << " = ";

    long long m = a*d , n=b*c; //除以一个数等于乘一个数的倒数,m分子 n分母
    if(n == 0)
        cout << "Inf" <<endl;

    else{
        if(n < 0){
            m *= -1;
            n *= -1; //有负号，负号给分子
        }

        print(m,n);
        cout << endl;
    }
}
