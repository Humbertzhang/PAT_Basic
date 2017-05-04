#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int i,num;
	cin >> num ;
	double a[num][2],value,max;
	for(i=0;i<num;i++){
		cin>>a[i][0]>>a[i][1];
		value = sqrt(a[i][0]*a[i][0] + a[i][1]*a[i][1]);
		if(value>max){
			max = value;
		}
	}
	printf("%.2lf",max);
	return 0;
}