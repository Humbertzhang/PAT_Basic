#include <stdio.h>
int main()
{
    float k,income,kinds,needs,have[1000],sales[1000],one[1000],list[1000];
    int i,j;
    scanf("%f %f",&kinds,&needs);
    for(i = 0;i<kinds;i++)
    {
     scanf("%f",&have[i]);
    }

    for(i=0;i<kinds;i++)
    {
     scanf("%f",&sales[i]);
    }
    
    for(i = 0;i<kinds;i++)
    {
     one[i] = sales[i]/have[i];
    }
    //kinds != 1 时才排序
    if (kinds != 1){
    for(i=0;i<kinds;i++){
       for(j =0;j<kinds-1;j++){
          if(one[j]>=one[j+1]){
             k = one[j];
             one[j] = one[j+1];
             one[j+1] = k;
             k = have[j];
             have[j] = have[j+1];
             have[j+1] = k;
          }
       }
    }
  }
  //排序have 与 needs（从小到大排序的，所以用的时候从大到小）
    
    income = 0;
    if (kinds != 1){
    for(i=kinds-1;i>=0&&needs>0;i--){
        if (have[i]<= needs){
          needs = needs - have[i];
          income += have[i]*one[i];
        }
        
        else {
          income += one[i]*needs;
          goto loop_done;
        }
    }
 
    loop_done:
    printf("%.2f\n",income);
 }
   else if (kinds == 1){
    income = needs * one[0];
    printf("%.2f\n",income);
 }

    return 0;
}
