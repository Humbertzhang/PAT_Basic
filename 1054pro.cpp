#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n,countright=0;
    cin >> n;
    char a[100],b[100];
    double temp,sum=0.0;
    
    for(int i=0;i<n;i++){
        int flag = 0;
        
        scanf("%s",a);

        sscanf(a,"%lf",&temp);//从a字符串中读入与"%lf"格式相同的数据写到temp中
        sprintf(b,"%.2lf",temp);//从temp中读入"%.2lf"的数据写到字符串b中

        for(int j = 0;j<strlen(a);j++){
            if(a[j]!=b[j])
                flag = 1;
        }
        if(flag || temp <-1000 || temp > 1000){
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        }
        else{
            sum += temp;
            countright++;
        }
    }
    if(countright == 1)
        printf("The average of 1 number is %.2lf", sum);
    else if(countright > 1)
        printf("The average of %d numbers is %.2lf",countright,sum/countright);
    else
        printf("The average of 0 numbers is Undefined");
    return 0;
}
