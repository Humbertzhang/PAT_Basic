#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int n,d;
	double e,maybe=0,sure=0;
	cin >>n>>e>>d;
	for(int i=0;i<n;i++)
	{
		double k;
		int days=0,below_days=0;
		cin >> days;
		for(int j=0;j<days;j++)
		{
			cin >> k;
			if(k<e)
			{
				below_days+=1;
			}
		}
		below_days > days/2 ? (days>d?sure++:maybe++) : 1;
	}
	printf("%.1lf%% %.1lf%%\n",(maybe/n)*100,(sure/n)*100);
	return 0;
}