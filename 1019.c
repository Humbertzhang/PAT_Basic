#include <stdio.h>

int main()
{
    int i,j,tem,num;
    int max=0,min=0,result=0;
    int bit[4],cp[4];
    scanf("%d",&num);
    

    if(num>=1000){
        cp[0] = bit[0] = num/1000;
    }else{
        cp[0] = bit[0] = 0;
    }
    if(num >=100){
        cp[1] = bit[1] = (num - bit[0]*1000)/100;
    }else{
        cp[1] = bit[1] = 0;
    }
    if(num>=10){
        cp[2] = bit[2] = (num - bit[0]*1000-bit[1]*100)/10;
    }else{
        cp[2] = 0;
    }
    cp[3] = bit[3] = num % 10;
    

    if(bit[0]==bit[1]&&bit[1]==bit[2]&&bit[2]==bit[3]){
        printf("%d%d%d%d - %d%d%d%d = 0000\n",bit[0],bit[0],bit[0],bit[0],bit[0],bit[0],bit[0],bit[0]);
        return 0;
    }


    while(result != 6174){
        for(i=0;i<4;i++){
            for(j=i;j<4;j++){
                if(bit[i] < bit[j]){
                    tem = bit[i];       //从大到小
                    bit[i] = bit[j];
                    bit[j] = tem;   
                }
            }
        }
        max = bit[0]*1000+bit[1]*100+bit[2]*10+bit[3];
        
        for(i=0;i<4;i++){
            for(j=i;j<4;j++){
                if(cp[i] > cp[j]){
                    tem = cp[i];       //从小到大
                    cp[i] = cp[j];
                    cp[j] = tem;   
                }
            }
        }
        min = cp[0]*1000+cp[1]*100+cp[2]*10+cp[3];
        
        result = max - min;
        printf("%04d - %04d = %04d\n",max,min,result);
       

        num = result;
        if(num>=1000){
            cp[0] = bit[0] = num/1000;
        }else{
            cp[0] = bit[0] = 0;
        }
        if(num >=100){
            cp[1] = bit[1] = (num - bit[0]*1000)/100;
        }else{
            cp[1] = bit[1] = 0;
        }
        if(num>=10){
            cp[2] = bit[2] = (num - bit[0]*1000-bit[1]*100)/10;
        }else{
            cp[2] = 0;
        }
        cp[3] = bit[3] = num % 10;
    

    }
    return 0;
}
