#include <stdio.h>

int prime(int n)
{
    int divisor;
    for (divisor = 2;divisor*divisor <=n;divisor ++){
        if (n%divisor == 0) //在这个循环中，如果有一个素数，就直接return 0给整个函数，并且立即停止整个函数的运行
            return 0;   
    }
    return 1;   //如果之前都没有跳出循环，在循环完之后return 1;
} 
int main()
{
    int first,second,start,end;
    int prime_counter=0,i,line_counter; 
    scanf("%d %d",&first,&second);
    int tol=0;
    //int i=2;
    int print=0;
    for(int i=2;;i++){
        if(prime(i)){
            tol++;
            if(tol>=first){
            print++;
            if(print%10==1)printf("%d",i);
            else printf(" %d",i);
            if(print%10==0)printf("\n");
            }
            if(tol==second)break;
        }
    }
    return 0;
}
