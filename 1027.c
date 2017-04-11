#include <stdio.h>

int numbers(int n)
{
    int a;
    a = 2*n*n-1; 
    return a;
}

int everyslip(int in)
{
    int out;
    out = 2*in - 1;
    return out;
}

int main()
{
    int max;
    int num;
    char ch;
    int left;
    int i,j;
    
    scanf("%d %c",&num,&ch);
    for(max=1;max<=25;max++){
        if ((num >= numbers(max))&&(num < numbers(max+1))){
            break;
        }
    }
    left = num - numbers(max);
    for(i=max;i>=1;i--){
        for(j=0;j<((everyslip(max) - everyslip(i))/2);j++){
            printf(" ");
        }
        for(j=0;j<everyslip(i);j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    for(i=2;i<=max;i++){
        for(j=0;j<((everyslip(max) - everyslip(i))/2);j++){
            printf(" ");
        }
        for(j=0;j<everyslip(i);j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    printf("%d",left);
    
    return 0;
}
