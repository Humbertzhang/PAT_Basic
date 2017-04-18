#include <stdio.h>

int main()
{
	long long int tol,needto;
	scanf("%lld",&tol);
	long long int id[tol],ori[tol],real[tol];
	int i,j,k,num;
	for(i=0;i<tol;i++){
		scanf("%lld %lld %lld",&id[i],&ori[i],&real[i]);
	}
	scanf("%lld",&needto);
	for(j=0;j<needto;j++){
		scanf("%d",&num);
		for(k=0;k<tol;k++){
			if(num == ori[k]){
				printf("%lld %lld\n",id[k],real[k]);
			}
		}
	}

	return 0;
}