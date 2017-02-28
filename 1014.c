#include <stdio.h>
int main()
{
    char str1[60],str2[60],str3[60],str4[60];
    char a;
    int i;

    for (i=0;i<60;i++){
        str1[i] = getchar();
        if (str1[i] == '\n')
            break;
    }
    for (i=0;i<60;i++){
        str2[i] = getchar();
        if (str2[i] == '\n')
            break;
    }
    for (i=0;i<60;i++){
        str3[i] = getchar();
        if (str3[i] == '\n')
            break;
    }
    for (i=0;i<60;i++){
        str4[i] = getchar();
        if (str4[i] == '\n')
            break;
    }

    char day;
    for(i = 0;i<60;i++){
        if (str1[i] == str2[i]){
            if (str1[i]>=65 && str1[i]<=71){
                day = str1[i];
                break;
            }
          }    
        }
    int mark2 =0;
    char hour;
    for (i=0;i<60;i++){
        if (mark2==0&&(str1[i]>='A'&&str1[i]<=90)){
            mark2 =1;
            continue;
        }
        else if (mark2==1&&(str1[i]>='0'&&str1[i]<='9')&&(str1[i] == str2[i])){
            hour = str1[i] -'0';
            break;
        }
        else if(mark2 == 1&&(str1[i]>=65&&str1[i]<=78)&&(str1[i] == str2[i])){
            hour = str1[i];
            break;
        }
    }


   int minute;
   for (i = 0;i<60;i++){
        if (str3[i] == str4[i]){
            if ((str3[i] >=65 && str3[i] <= 90)||(str3[i] >= 97&&str3[i]<=122)){
                minute = i;
                break;
            }
        }
   }
    switch(day) {
        case 'A': printf("MON "); break;
        case 'B': printf("TUE "); break;
        case 'C': printf("WED "); break;
        case 'D': printf("THU "); break;
        case 'E': printf("FRI "); break;
        case 'F': printf("SAT "); break;
        case 'G': printf("SUN "); break;
    }
    switch(hour) {
        case '0': printf("00:"); break;
        case '1': printf("01:"); break;
        case '2': printf("02:"); break;
        case '3': printf("03:"); break;
        case '4': printf("04:"); break;
        case '5': printf("05:"); break;
        case '6': printf("06:"); break;
        case '7': printf("07:"); break;
        case '8': printf("08:"); break;
        case '9': printf("09:"); break;
        case 'A': printf("10:"); break;
        case 'B': printf("11:"); break;
        case 'C': printf("12:"); break;
        case 'D': printf("13:"); break;
        case 'E': printf("14:"); break;
        case 'F': printf("15:"); break;
        case 'G': printf("16:"); break;
        case 'H': printf("17:"); break;
        case 'I': printf("18:"); break;
        case 'J': printf("19:"); break;
        case 'K': printf("20:"); break;
        case 'L': printf("21:"); break;
        case 'M': printf("22:"); break;
        case 'N': printf("23:"); break;
    }
    if (minute <10)
        printf("0%d",minute);
    else 
        printf("%d",minute);
    printf("\n");
    return 0;
}
