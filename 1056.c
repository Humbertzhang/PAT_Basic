#include <stdio.h>
int main()
{
    int count,total=0,twobits;
    scanf("%d",&count);
    int num[count]={0};
    int i,j;
    for(i=0;i<count;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            if (i == j){
                continue;
            }
            twobits = num[i]*10 + num[j];
            total+=twobits;
        }
    }
    printf("%d",total);
    return 0;
}
