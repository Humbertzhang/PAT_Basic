#include <stdio.h>
int main()
{
    int  a,c,d;
    char b;
    scanf("%d %c",&a,&b);
    c = a;
    if (a %2 == 0) //偶数
    {
    for (c;c>=1;c--)
    {
     printf("%c",b);
    }
    printf("\n");
    c =a/2-2;
    d =a-2;
    for (c;c>=1;c--)
    {
     printf("%c",b);
     for (d;d>=1;d--)
     {
        printf(" ");
     }
     d = a-2;
     printf("%c",b);
     printf("\n");
    }
    
    c = a;
    for (c;c>=1;c--)
    {
     printf("%c",b);
    }
    printf("\n");
    }          
    else     //奇数
    {
     for (c;c>=1;c--)
     {
      printf("%c",b);
     }
      printf("\n");
     c = a/2;
     d = a -2;
    for (c;c>=2;c--)
    {
    printf("%c",b);
    for (d;d>=1;d--)
     {
     printf(" ");
     }
    d = a-2;
    printf("%c",b);
    printf("\n");
    }
    c = a;
    for (c;c>=1;c--)
     {
      printf("%c",b);
     }
     printf("\n");
    }
    return 0;
}
