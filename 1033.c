#include <stdio.h>
int main()
{
    char bad[100],in[100001];
    int noupper = 0;
    int i=0,j=0,k,l,flag=0;
    while((bad[i]=getchar()) != '\n'){
        if(bad[i] == '+'){
            noupper = 1;
        }
        i+=1;
    }
    while((in[j]=getchar())!= '\n' ){
        j+=1;
    }
    for(k=0;k<j;k++){
        if((noupper == 1)&&((in[k]>=65)&&(in[k])<=90)){
            continue;
        }
        flag = 0;
        for(l=0;l<i;l++){
            if(bad[l]>=65&&bad[l]<=90){
                if((in[k] == bad[l])||(in[k]-32 == bad[l])){
                    flag = 1;
                    break;
                }
            }else{
                if(in[k] == bad[l]){
                    flag = 1;
                    break;
                }
            }
        }    
        if(flag == 0 ){
            printf("%c",in[k]);
        }
    }
    printf("\n");
    return 0;
}
