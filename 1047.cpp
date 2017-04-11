#include <stdio.h>
int main()
{
	int n,i;
	int team[10000]={0};
	int teamid,id,grade;
	int max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d-%d %d",&teamid,&id,&grade);
		team[teamid]+=grade;
	}
	for(i=0;i<10000;i++){
		if (team[i] > team[max]){
			max = i;
		}
	}
	printf("%d %d\n",max,team[max]);
	return 0;
}