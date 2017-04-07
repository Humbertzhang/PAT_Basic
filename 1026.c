#include <stdio.h>

int main()
{
    int t1,t2;
    double tused;
    int hh,mm,ss,seconds;
    scanf("%d %d",&t1,&t2);
    tused = t2-t1;
    seconds = (int)((tused/100.0)+0.5);

    hh = seconds / (60*60);
    mm = (seconds - hh*3600)/60;
    ss = seconds - hh*3600 - mm*60;
    //ss = (int)(ss+0.5);
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}
