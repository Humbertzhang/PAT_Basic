#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int num,temp,i,cnt=0;
    map<int,int> friends;
    int out[1001] = {0};

    cin>>num;
    int all[num];
    for(i=0;i<num;i++){
        cin>>all[i];
    }

    for(i=0;i<num;i++){
        temp = 0;
        while(all[i]>0){
            temp += all[i]%10;
            all[i]/=10;
        }
        if(friends[temp] == 0){
            friends[temp] = 1;
            out[cnt] = temp;
            cnt += 1;
        }
    }
    sort(out,out+cnt);
    cout<<cnt<<endl;
    for(i=0;i<cnt;i++){
        if(i!=cnt-1){
            cout<<out[i]<<" ";
        }else{
            cout<<out[i]<<endl;
        }
    }
    return 0;
}
