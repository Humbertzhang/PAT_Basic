#include <stdio.h>
int main()
{
    int m,n,start,end,instead;
    scanf("%d %d %d %d %d",&m,&n,&start,&end,&instead);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if (a[i][j]>=start&&a[i][j]<=end){
                a[i][j] = instead;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]<10){
                if(j){
                    printf(" 00%d",a[i][j]);
                }
                else{
                    printf("00%d",a[i][j]);
                }
            }
            else if(a[i][j]<100){
                if(j){
                    printf(" 0%d",a[i][j]);
                }
                else{
                    printf("0%d",a[i][j]);
                }
            }
            else{
                if(j){
                    printf(" %d",a[i][j]);
                }
                else{
                    printf("%d",a[i][j]);
                }
            }
            if(j==n-1){
                printf("\n");
            }
       }     
    }
    return 0;
}
