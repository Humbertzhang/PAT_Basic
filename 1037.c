#include <stdio.h>
int main()
{
    int g1,s1,k1,g2,s2,k2,g3,s3,k3;
    int gtemp,stemp,ktemp;
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
        
    if (g1 <= g2){
        ktemp = k2 - k1;
        if (ktemp < 0){
            ktemp += 29;
            s2 --;
        }
        stemp = s2 -s1;
        if (stemp < 0){
            stemp += 17;
            g2 --;
        }
        gtemp = g2 - g1;
        printf("%d.%d.%d",gtemp,stemp,ktemp); 
    }

    else if(g1 > g2){
        ktemp = k1 - k2;
        if (ktemp < 0){
            ktemp += 29;
            s1 --;
        }
        stemp = s1 - s2;
        if (stemp < 0){
            stemp += 17;
            g1 --;
        }
        gtemp = g1 - g2;
        printf("-%d.%d.%d",gtemp,stemp,ktemp); 
    }
    return 0;
}

