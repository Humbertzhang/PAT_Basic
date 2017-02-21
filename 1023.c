#include <stdio.h>
int main(void)
{
    int a[10],i;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);

    if (a[0] != 0){
        for(i=1;i<10;i++){
             for(i;a[i]!=0;){
                 printf("%d",i);
                 a[i] -= 1;
                 goto done;
        }
    }
    done:
        for(i=0;i<10;i++){
            for(i;a[i]>0;a[i]--){
                printf("%d",i);
            }
        }
    }

    if (a[0]==0){
        for(i=0;i<10;i++){
            for(i;a[i]>0;a[i]--){
                printf("%d",i);
            }
        }
    }
    printf("\n");
    return 0;
}
