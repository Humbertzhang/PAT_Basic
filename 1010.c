#include <stdio.h>
#define NUM 1000
int main()
{
    int xi[NUM]={0},zhi[NUM]={0};
    int i,j,flag=0;
    for(i=0;i<NUM;i++){
        scanf("%d%d",&xi[i],&zhi[i]);
        if(getchar()=='\n'){
            break;
        }
    }
    i += 1;
        for(j=0;j<i;j++){
            xi[j] = zhi[j] * xi[j];
            zhi[j] -= 1;
            if(zhi[j] != -1){
                flag=1;
                if(j!=i-1&&zhi[j+1]!=0){
                    printf("%d %d ",xi[j],zhi[j]);
                }else{
                    printf("%d %d",xi[j],zhi[j]);
                }
            }
        }
    if(flag == 0){
        printf("0 0");
    }
    printf("\n");
    return 0;
}

