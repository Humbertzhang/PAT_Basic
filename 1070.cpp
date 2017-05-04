#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int result = a[0];
	for(i=1;i<n;i++){
		result = (result + a[i])/2;
	}
	printf("%d",result);
	return 0;
}