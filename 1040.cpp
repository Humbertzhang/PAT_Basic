#include <stdio.h>
int main()
{
	char a[100001];
	long long i=0,tol=0,cntP=0,cntT=0;
	while ((a[i]=getchar())!='\n'){
		i+=1;
	}
	for(int t=0;t<i;t++){
		if(a[t]=='T')
			cntT+=1;
	}
	for(int j=0;j<i;j++){
		if(a[j]=='P') cntP++;
		if(a[j]=='T') cntT--;
		if(a[j]=='A')
			tol=(tol + (cntP*cntT)%1000000007)%1000000007;
	}
	printf("%lld\n",tol);
	return 0;
}