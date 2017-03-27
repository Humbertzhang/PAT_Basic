#include <stdio.h>
int main()
{
    int i,j,P=0,A=0,T=0,e=0,s=0,t=0;
    char str[10000];
    for(i=0;i<10000;i++){
        scanf("%c",&str[i]);
        if (str[i] == '\n'){
            break;
        }
        else if(str[i] == 'P'){
            P++;
        }
        else if(str[i] == 'A'){
            A++;
        }
        else if(str[i] == 'T'){
            T++;
        }
        else if(str[i] == 'e'){
            e++;
        }
        else if(str[i] == 's'){
            s++;
        }
        else if(str[i] == 't'){
            t++;
        }
    }
    for(j=0;j<i;j++){
        if(P>0){
            printf("P");
            P--;
            j++;
        }
        if(A>0){
            printf("A");
            A--;
            j++;
        }
        if(T>0){
            printf("T");
            T--;
            j++;
        }
        if(e>0){
            printf("e");
            e--;
            j++;
        }
        if(s>0){
            printf("s");
            s--;
            j++;
        }
        if(t>0){
            printf("t");
            t--;
            j++;
        }
    }
    return 0;
}
