/*
坑：

1,没结婚是单身狗，结婚了但伴侣没来也算单身狗！！！
2,这个办法比较麻烦。。。需要对00000号特别处理一下,方法不太好

思路：
1,首先用map将每对伴侣双向地存起来，像map[a] = b,map[b] = a 这种形式
2,再用set记录实际来了的人
3,如果（本来就没有伴侣）||（有伴侣&&伴侣没来）
        if(couple_map[id[i]] == 0||(couple_map[id[i]]!=0&&appeared.count(couple_map[id[i]])==0)) 
  就加入到单身狗数组中
4,加完之后排序，输出

*/


#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	
	int couples; 
	cin >> couples;
	int couple1,couple2;
	map<int,int> couple_map;

	for(int i=0;i<couples;i++){
		cin >> couple1>>couple2;
		if(couple1==0){         //对00000号特别处理
			couple1 = -1;
		}
		if(couple2==0){
			couple2 = -1;
		}
		couple_map[couple1] = couple2;
		couple_map[couple2] = couple1;
	}

	set<int> appeared;
	int all;
	cin >> all;
	int id[50001];
	int singles[50001],single_num = 0;

	for(int i=0;i<all;i++){
		cin >> id[i];
		if(id[i] == 0){         //对00000号特别处理
			id[i] = -1;
		}
		appeared.insert(id[i]);
	}

	for(int i=0;i<all;i++){
		if(couple_map[id[i]] == 0||(couple_map[id[i]]!=0&&appeared.count(couple_map[id[i]])==0)){ 	//没结婚或者结婚了伴侣没来
				singles[single_num] = id[i];
				single_num+=1;
		}
	}

	sort(singles,singles+single_num);

	//OUT PUT PART
	cout << single_num<<endl;
	for(int j=0;j<single_num;j++){
		if(singles[j] == -1){   //对00000号特别处理
			printf("00000 ");   
			continue;
		}
		if(j!=single_num-1){
			printf("%05d ",singles[j]);
		}else{
			printf("%05d\n",singles[j]);
		}
	}
	return 0;
}
