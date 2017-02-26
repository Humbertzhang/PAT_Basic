#include <stdio.h>
int main(){
    int i,j=1,k,num,input[1001],a1=0,a2[1001],a2_2;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&input[i]);
    }

    for (i=0;i<num;i++){
        if (input[i]%5 == 0&&input[i]%2 ==0){
            a1 += input[i];
        }
    }//A1
    
    for (i=0;i<num;i++){
        if (input[i]%5 == 1){
            a2[j] = input[i];
            j++;
        }
    }
    k = j;
    for (j = 1;j <= k ; j++){
        if (j%2 == 1)
        a2_2 += a2[j];
        else 
        a2_2 -= a2[j];
    }//A2

    int a3=0;
    for (i=0;i<num;i++){
        if(input[i]%5 == 2){
            a3 ++;
        }
    }//A3   
    
    float sum=0,counter=0;
    float a4;
    for (i=0;i<num;i++){
        if (input[i]%5 == 3){
            sum += input[i];
            counter ++;
         }
    }
        a4 = sum / counter;
        //A4
    
    int a5=0;
    for (i=0;i<num;i++){
        if (input[i]%5 ==4&&input[i]>a5){
            a5 = input[i];
        }
    }
    
    if (a1 == 0)
        printf("N");
    else 
        printf("%d",a1);
    if (k == 1)
        printf(" N");
    else 
        printf(" %d",a2_2);
    if (a3 == 0)
        printf(" N");
    else  
        printf(" %d",a3);
    if (sum == 0)
        printf(" N");
    else 
        printf(" %.1f",a4);
    if (a5 == 0)
        printf(" N");
    else 
        printf(" %d",a5);

    return 0;
}
