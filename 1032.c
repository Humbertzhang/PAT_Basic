#include <stdio.h>
int main()
{
    int count;
    int schools,grades,max=0;
    int a[100010]={0};
    int i;
    scanf("%d",&count);
    for(i=0;i<count;i++){
        scanf("%d %d",&schools,&grades);
        a[schools] += grades;
        if(a[schools]>a[max]){
            max = schools;
        }
    }
    printf("%d %d",max,a[max]);
    return 0;
}
