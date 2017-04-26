#include <stdio.h>
int main()
{
    int n,m;
    int i;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[(i+m)%n]);
    }
    for(i=0;i<n;i++){
        if(i!=n-1){
            printf("%d ",a[i]);
        }else{
            printf("%d",a[i]);
        }
    }
    printf("\n");
    return 0;
}
