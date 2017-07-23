#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void convert_mars_to_earth(char *num);
void convert_earth_to_mars(char *num);


char marhigh[12][4]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer","jou"};
char marlow[13][4]={"tre","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        scanf("\n");
        char *num,a;
        num = new char [20];
        int k=0;
        while((a=getchar())!='\n') {
            *(num + (k++)) = a;
        }
        *(num+k) = '\0';
        //只需要判断第一个是不是数字就够了
        if(isdigit(*num))
            convert_earth_to_mars(num);
        else
            convert_mars_to_earth(num);

        delete [] num;
    }
    return 0;
}

void convert_earth_to_mars(char *num)
{
    int n = atoi(num);
    if(n==0){
        cout << "tret" <<endl;
        return;
    }

    char highchar[4],lowchar[4];
    int high=0,low=0;
    high = n/13;
    low = n%13;

    if(high!=0){
        strncpy(highchar,marhigh[high-1],4);
        cout << highchar;
        if(low == 0)
            cout <<endl;
    }
    if(low != 0){
        if(high!=0)
            cout << " ";

        strncpy(lowchar,marlow[low],4);
        cout << lowchar<<endl;
    }


}

void convert_mars_to_earth(char *num)
{
    int i=0,j,output=0;

    if(strlen(num)>4) {

        char *temp;
        temp = new char [4];
        while (*(num + i) != ' ') {
            *(temp + i) = *(num + i);
            i++;
        }
        *(temp+(i++)) = '\0';
        for(j=0;j<12;j++) {
            if (strcmp(temp, marhigh[j]) == 0) {
                output += (j + 1) * 13;
                break;
            }
        }
        delete [] temp;

        char *temp2;
        temp2 = new char [4];
        j=0;
        while(i<strlen(num)){
            *(temp2+j) = *(num+i);
            i++;
            j++;
        }
        *(temp2+3) = '\0';
        for(j=0;j<13;j++){
            if (strncmp(temp2,marlow[j],3)==0) {
                output +=j;
                break;
            }
        }
        delete [] temp2;
    }

    if(strlen(num)<=4){
        char *temp3;
        temp3 = new char [4];

        while (i<strlen(num)) {
            *(temp3 + i) = *(num + i);
            i++;
        }
        *(temp3+i) = '\0';

        for(j=0;j<13;j++){
            if (strncmp(temp3,marlow[j],3)==0) {
                output +=j;
                break;
            }
            else if(strncmp(temp3,marhigh[j],3)==0){
                output +=(j+1)*13;
                break;
            }
        }
        delete [] temp3;
    }
    cout << output <<endl;
}
