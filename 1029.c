#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[100],b[100];
    int used[50]={'~'};
    int i=0,j=0,k,l=0,m,flag=0,flag2=0;
    while((a[i]=getchar()) != '\n'){
        if(isalpha(a[i])){
            a[i] = toupper(a[i]);
        }    
        i+=1;
    }
    while((b[j]=getchar())!='\n'){
        if(isalpha(b[j])){
            b[j] = toupper(b[j]);
        }    
        j+=1;
    }
    b[j] = 0;
    a[i] = 0;
    int cnt = 0;
    
    //k1:a k2:b  USED
    for(k=0;k<i;k++){
        flag=0;
        if (a[k] != b[cnt]){
           flag = 1;
        }

        if (flag){
            flag2=0;
            for(m=0;m<50;m++){
                if(a[k] == used[m]){
                    flag2 = 1;
                    break;
                }
            }
            if(flag2 == 0){
                printf("%c",a[k]);
                used[l] = a[k];
                l+=1;
            }    
        }else{
            cnt++;
        }    
    }
    return 0;
}
