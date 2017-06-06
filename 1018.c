#include <stdio.h>
int main()
{
    int i,times;
    int equal=0,jiawin=0,jialose=0,jiaj=0,yij=0,jiac=0,yic=0,jiab=0,yib=0;
    char jia,yi;
    scanf("%d",&times);
    for(i=0;i<times;i++){
        scanf(" %c %c",&jia,&yi);
        if(jia=='C'&&yi=='C'||jia=='J'&&yi=='J'||jia=='B'&&yi=='B'){
            equal++;
        }
        else if(jia=='C'&&yi=='J'){
            jiawin++;
            jiac++;
        }
        else if(jia=='J'&&yi=='B'){
            jiawin++;
            jiaj++;
        }
        else if(jia=='B'&&yi=='C'){
            jiawin++;
            jiab++;
        }
        else if(yi=='C'&&jia=='J'){
            jialose++;
            yic++;
        }
        else if(yi=='J'&&jia=='B'){
            jialose++;
            yij++;
        }
        else if(yi=='B'&&jia=='C'){
            jialose++;
            yib++;
        }
    }

    printf("%d %d %d\n",jiawin,equal,jialose);
    printf("%d %d %d\n",jialose,equal,jiawin);
    printf("%c ",jiab>=jiac ? (jiab>=jiaj ? 'B' : 'J') :(jiac>=jiaj ? 'C' : 'J'));
    printf("%c",yib>=yic ? (yib>=yij ? 'B' : 'J') :(yic>=yij ? 'C' : 'J'));
    return 0;
}
