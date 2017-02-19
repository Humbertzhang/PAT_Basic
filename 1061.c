#include <stdio.h>
#include <string.h>
#define X 1000
int main()
{
    int i,j,sum,total,score[X],ans[X],answer[X],grade[100];
    memset(grade,0,sizeof(grade));
    scanf("%d %d",&sum,&total);
    for(i = 0;i<total;i++){
       scanf("%d",&score[i]);
    }
    for(i =0;i<total;i++){
       scanf("%d",&ans[i]);
    }

    for(i = 0;i<sum;i++){
      for(j = 0;j<total;j++){
        scanf("%d",&answer[j]);
        if (answer[j] == ans[j])
            grade[i]+=score[j];
      }
    }

    for(i =0;i<sum;i++){
    printf("%d\n",grade[i]);
    }
    return 0;
}
