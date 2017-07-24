#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main()
{
    int i,n,countright=0;
    double result = 0;
    cin >> n;
    for(i=0;i<n;i++){
        int j,k,flag=1,countdot=0;
        double num;
        char * temp;
        int fuhao = 0;
        temp = new char [10000];
        cin >> temp;

        for(j=0;j<strlen(temp);j++){
            if(!isdigit(temp[j])){
                if(temp[j]!='.'&& temp[j]!='-'){
                    flag = 0;
                    break;
                }
                if(temp[j] == '-')
                    fuhao = 1;

                else if(temp[j]=='.'){
                    countdot ++ ;
                    if(countdot > 1){
                        flag = 0;
                        break;
                    }
                    else if(strlen(temp)-1-j>2){
                        if(fuhao == 0||temp[strlen(temp)-1]!='.'){
                            flag=0;
                            break;
                        }
                        
                    }
                }
            }
        }

        if(flag == 1){
            num = atof(temp);
            if(num <-1000 || num > 1000)
                flag = 0;
        }

        if(flag == 0)
            printf("ERROR: %s is not a legal number\n",temp);
        
        else{
            countright ++;
            num = atof(temp);
            result += num;
        }

    }

    if (countright == 1){
        printf("The average of 1 number is %.2lf", result);
    }
    else if(countright > 1){
        cout << "The average of "<<countright<< " numbers is ";
        printf("%.2lf",result/countright);
    }
    else if(countright == 0)
        cout << "The average of 0 numbers is Undefined" <<endl;

    return 0;
}
