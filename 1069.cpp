#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int flag=0;
	int m,n,s;
	cin >> m>>n>>s;
	vector <string> all;
	set <string> had;
	string tem;
	
	for(int i=0;i<m;i++){
		cin>>tem;
		all.push_back(tem);
	}

	for(int j=s-1;j<m;j+=n){
		if(!had.count(all[j])){
			cout << all[j] << endl;
			had.insert(all[j]);
			flag = 1;
		}
		else if(had.count(all[j])){
			do{j+=1;}while(had.count(all[j])&&j<m);
			had.insert(all[j]);
			cout << all[j] << endl;	
		}
	}
	if(flag == 0){
		cout<<"Keep going..."<<endl;
	}
	return 0;
}