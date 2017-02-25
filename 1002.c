#include<stdio.h>

int main()
{
    char a;
    int i=0;
    int sum=0;
    int ans[110];
    char str[][5]={"ling","yi","er","san","si","wu","liu",
    "qi","ba","jiu"};
    while((a=getchar())!='\n'){
        sum+=a-'0';
    }
    for(i=0;sum!=0;i++){
        ans[i]=sum%10;
        sum/=10;
    }
    int begin=i-1;
    for(i=begin;i>=0;i--){
        if(i==begin)
        printf("%s",str[ans[i]]);
        else
        printf(" %s",str[ans[i]]);
    }
    printf("\n");
    
    
    return 0;
}
