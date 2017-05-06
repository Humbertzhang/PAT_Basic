/**************************************************
*坑： １，注意第一个分数跟第二个分数之间的大小问题 *
*     ２，注意为　之间的　数字，不包括两端         *
*最大公约数欧几里的算法：                          *
*int gcd(int a , int b)                            *
*{                                                 *
*    return b == 0? a : gcd(b,a%b);                *
*}                                                 * 
***************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a,int b)
{
	return b == 0? a : gcd(b,a%b);
}

int main()
{
	double n1,m1,n2,m2,k,value1,value2,valuebig,valuesmall;
	int i,cnt;
	int ns[100001];

	scanf("%lf/%lf %lf/%lf %lf",&n1,&m1,&n2,&m2,&k);

	value1 = n1/m1;
	value2 = n2/m2;
	valuebig = value1 > value2 ? value1 : value2;
	valuesmall = value1 < value2 ? value1 : value2;

	for(i=0;i<k;i++){
		if(gcd(i,(int)k)==1&&(i/k)>valuesmall&&(i/k)<valuebig){
			ns[cnt] = i;
			cnt+=1;
		}
	}

	for(i=0;i<cnt;i++){
		if(i!=cnt-1){
	    	printf("%d/%d ",ns[i],(int)k);
		}else{
			printf("%d/%d\n",ns[i],(int)k);
		}
	}
	return 0;
}
