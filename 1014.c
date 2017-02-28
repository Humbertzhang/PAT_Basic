#include <stdio.h>
#include <ctype.h>

int main()
{
    char str1[60],str2[60],str3[60],str4[60];
    int i;

    gets(str1);
  gets(str2);
  gets(str3);
  gets(str4);
    char day;
    int mark2 =0;
    char hour;
    for (i=0;i<60;i++){
        if (mark2==0&&(str1[i]>='A'&&str1[i]<='G')&&(str1[i] == str2[i])){
            mark2 =1;
            day = str1[i];
        }
        else if (mark2==1&&(str1[i]>='0'&&str1[i]<='9')&&(str1[i] == str2[i])){
            hour = str1[i];
            break;
        }
        else if(mark2 == 1&&(str1[i]>='A'&&str1[i]<='N')&&(str1[i] == str2[i])){
            hour = str1[i];
            break;
        }
    }


   int minute;
   for (i = 0;i<60;i++){
        if (str3[i] == str4[i]&&isalpha(str3[i])){
                minute = i;
                break;
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
