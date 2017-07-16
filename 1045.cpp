//对原序列进行排序后，如果当前元素的位置没有发生改变，并且原序列当前位置左边的所有元素中的最大值比当前元素小，当前元素就是主元素。
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num;
    cin >> num;
    int a[num],b[num],i;
    int cnt=0,max=0;
    int index[num];

    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    sort(b,b+num);

    for(i=0;i<num;i++){
        if(a[i]==b[i]&&a[i]>max)
            index[cnt++] = a[i];
        if(a[i]>max)
            max=a[i];
    }

    cout << cnt <<endl;

    for(int i=0 ;i<cnt ;i++){
        if(i==0){
            printf("%d",index[i]);
        }else{
            printf(" %d",index[i]);
        }
    }
    cout <<endl;
    return 0;
}
