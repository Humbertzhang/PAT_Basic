#include<stdio.h>
#include<string.h>
int main()
{
    char right[30];
    char input[20000];//一个坑在于，它输入的密码可能大于20
    int times;
    int i,flag=0;
    scanf("%s%d",right,&times);
    getchar();
    for(i=0;i<times;i++){
        gets(input);
        if(strcmp(input,"#")==0){
            return 0;
        }
        if(strcmp(input,right)==0 ){
            printf("Welcome in\n");
            return 0;
        }else{
            printf("Wrong password: %s\n",input);
        }
    }
    printf("Account locked\n");
    return 0;
}
