#include <stdio.h>
#include <string.h>

int main()
{
    int num,counter=0;
    char name[40];
    long long year,month,day;
    char maxname[40],minname[40];
    long long aliveday,maxday=-1,minday=80000;
    int i;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%s %lld/%lld/%lld",name,&year,&month,&day);
        aliveday = (2014-year)*365+(9-month)*30+(6-day);
        if(aliveday>=0&&aliveday<=73000){
            counter++;
            if(aliveday>maxday){
                maxday=aliveday;
                strcpy(maxname,name);                
            }
            if(aliveday<minday){
                minday=aliveday;
                strcpy(minname,name);
            }
        }
    }
    if (counter >0){
    printf("%d %s %s",counter,maxname,minname);
    }
    else 
    printf("0");
    return 0;
}   
