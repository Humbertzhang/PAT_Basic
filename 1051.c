#include <stdio.h>
#include <math.h>
int main()
{
    double r1,p1,r2,p2,front,backend;
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    a = r1*cos(p1);
    b = r1*sin(p1);
    c = r2*cos(p2);
    d = r2*sin(p2);
    front = a*c - b*d;
    backend = a*d + b*c;
    if (fabs(front)<0.001) //很小的时候注意 0 应该没有符号
    front = fabs(front);
    if (fabs(backend)<0.001)
    backend = fabs(backend);
    if (backend >= 0)
    printf("%.2lf+%.2lfi\n",front,backend);
    else 
    {
     backend = -backend;
     printf("%.2lf-%.2lfi\n",front,backend);
    }
    return 0;
}
