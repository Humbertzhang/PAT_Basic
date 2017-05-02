#include <stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	double list[num],sum=0;
	int i,j,k;
	for(i=0;i<num;i++){
		scanf("%f",&list[i]);
	}
	for(i=0;i<num;i++){
		sum += list[i]*(num-i)*(i+1);
	}
	printf("%.2lf\n",sum);
}