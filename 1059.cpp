/*******************************************************
*注意：１，排名是从１开始的（我的代码中是判断时加了１）*
*      ２，注意Ａre u kiding 的数字不会Ｃhecked        *
********************************************************/

#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int isprime(int n)
{
	if(n < 2) 
		return 0;
	for(int i=2;i<n;i++)
		if(n%i == 0)
			return 0;
	return 1;
}

int main()
{
	int i,j,all;
	cin >> all ;
	int list[all];
	set<int> inqued;

	for(i=0;i<all;i++){  
		cin >> list[i];
	}

	int needinq,inqu_num;
	cin >> needinq;

	for(j=0;j<needinq;j++){
		cin >> inqu_num;
		int flag = 0;

		if(inqued.count(inqu_num)==1){
			printf("%04d: Checked\n",inqu_num);
			continue;
		} //Checked

		for(i=0;i<all;i++){
			if(list[i] == inqu_num){
				break;
			}
			if(i == all-1 && list[i]!=inqu_num){
				printf("%04d: Are you kidding?\n",inqu_num);
				flag = 1;
			} //Are u kidding
		}
		
		if(flag == 0){
			if(i == 0){
				printf("%04d: Mystery Award\n",inqu_num);
			}
			else if(isprime(i+1)){
				printf("%04d: Minion\n",inqu_num);
			}
			else{
				printf("%04d: Chocolate\n",inqu_num);
			}
			inqued.insert(inqu_num);
		}
	}
	return 0;
}
