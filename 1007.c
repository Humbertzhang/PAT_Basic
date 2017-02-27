#include<stdio.h>

int prime(int n);

int main()
{
    int i,j=0,counter,num,primes[10000];
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if (prime(i)){
            primes[j] = i;
            j++;
        }
    }
    int k = j;
    for (j =0;j<k;j++){
        if (primes[j+1] - primes[j] == 2){
            counter ++;
        }
    }
    printf("%d\n",counter);
    return 0;
}

int prime(int n)
{
    int divisor;
    for (divisor = 2;divisor*divisor<=n;divisor++){
        if (n%divisor == 0)
        return 0;
    }
    return 1;
}
                        
