#include <stdio.h>
int main()
{
    char input;
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;    
    while((input = getchar()) != '\n')
    {
     switch(input)
     {
     case '0':zero++;break;
     case '1':one++;break;
     case '2':two++;break;
     case '3':three++;break;
     case '4':four++;break;
     case '5':five++;break;
     case '6':six++;break;
     case '7':seven++;break;
     case '8':eight++;break;
     case '9':nine++;break;
     }   
    }
    if (zero != 0)
    printf("0:%d\n",zero);
    if (one != 0)
    printf("1:%d\n",one);
    if (two != 0)
    printf("2:%d\n",two);
    if (three != 0)
    printf("3:%d\n",three);
    if (four != 0)
    printf("4:%d\n",four);
    if (five != 0)
    printf("5:%d\n",five);
    if (six != 0)
    printf("6:%d\n",six);
    if (seven != 0)
    printf("7:%d\n",seven);
    if (eight != 0)
    printf("8:%d\n",eight);
    if (nine != 0)
    printf("9:%d\n",nine);
    return 0;
}
