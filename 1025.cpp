#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

struct node
{
    int address;
    int data;
    int next;
};

int main()
{
    vector<node> vtemp(100000); //暂存输入的节点
    vector<node> vsorted;  //暂存去掉无用节点，并排序之后的节点
    vector<node> vout; //储存反转之后的节点
    node temp;

    int first,N,K;
    cin >> first >> N >> K;

    if(first == -1)
        printf("-1\n");

    else{
        for(int i=0;i<N;i++){
            scanf("%d %d %d",&temp.address,&temp.data,&temp.next);
            vtemp[temp.address] = temp;
        }
        
        int nextAdd = first;
        while(nextAdd != -1){ //排序节点，并去掉无用节点
            vsorted.push_back(vtemp[nextAdd]);
            nextAdd = vtemp[nextAdd].next;
        }
        
        int Nsorted = vsorted.size();
        int index = K-1;
        
        //反转，每次从后向前向vout加节点,直到剩余不足K,此时index多加了K,故下一步应减去
        while(index < Nsorted){
            for(int i =index;i>index-K;i--)
                vout.push_back(vsorted[i]);
            index += K; 
        }
        for(int i=index-K+1;i<Nsorted;i++)
            vout.push_back(vsorted[i]);
        //Print
        for(int i=0;i<Nsorted-1;i++)
        {
            vout[i].next = vout[i+1].address;//之前仅排序了未修改真正的next,此处为了print而修改
            printf("%05d %d %05d\n",vout[i].address,vout[i].data,vout[i].next);
        }
        printf("%05d %d %d\n",vout[Nsorted-1].address,vout[Nsorted-1].data,-1);
    }
    return 0;
}
