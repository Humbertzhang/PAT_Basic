#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int i,j,k;
    char ina[101]={0};
    char inb[101]={0};

    cin >> ina >> inb;

    int lena,lenb,lenmax,lenabs,lenstart;
    int flag;

    lena = strlen(ina);
    lenb = strlen(inb);
    lenmax = lena>lenb?lena:lenb;

    if(lenb >= lena){
        flag = 1;
        lenstart = lenmax;
    }

    else{
        flag = 2;
        lenstart = lenb;
    }
    
    lenabs = abs(lena-lenb);

    if(flag == 1){
        for(i=lenstart-1;i>=lenabs;i--)
        {
            int a,b,temp;
            a = ina[i]-'0';
            b = inb[i-lenabs]-'0';

            if ((i+1)%2==0){
                temp = b-a;
                if(temp < 0)
                    temp += 10;
                inb[i] = '0'+temp;
            }

            else if((i+1)%2==1){
                temp = (a+b)%13;
                if(temp <10){
                    inb[i] = '0'+temp;
                }
                else if(temp == 10){
                    inb[i] ='J';
                }
                else if(temp == 11){
                    inb[i] ='Q';
                }
                else if(temp == 12){
                    inb[i] ='K';
                }
            }

        }

    }


    else if(flag == 2){
        for(i=lenstart-1;i>=0;i--)
        {
            int a,b,temp;
            a = ina[i+lenabs]-'0';
            b = inb[i]-'0';

            if ((i+1)%2==0){
                temp = b-a;
                if(temp < 0)
                    temp += 10;
                inb[i] = '0'+temp;
            }

            else if((i+1)%2==1){
                temp = (a+b)%13;
                if(temp <10){
                    inb[i] = '0'+temp;
                }
                else if(temp == 10){
                    inb[i] ='J';
                }
                else if(temp == 11){
                    inb[i] ='Q';
                }
                else if(temp == 12){
                    inb[i] ='K';
                }
            }

        }
    }

    cout << inb << endl;

    return 0;
}