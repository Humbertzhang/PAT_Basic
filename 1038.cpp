#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main()
{
	int i,tol,grade,inqu_num,nedinqu;
	cin >> tol;
	map<int,int> amap;
	for(i=0;i<tol;i++){
		cin >> grade;
		amap[grade] += 1;
	}
	cin >> inqu_num;
	for(i=0;i<inqu_num;i++){
		cin >> nedinqu;
		if(i != inqu_num-1)
			cout << amap[nedinqu]<<" ";
		else
			cout << amap[nedinqu]<<endl;
	}
	return 0;
}