#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


struct student{
    int id;
    int de;
    int cai;
    int rank = 100;
    /*  1德才均大于High分
        2德到High但才没到high,且才大于low
        3德才均不到high,但都够low了，且德>才
        4德才都到low了
        */
};


bool compare(student a,student b){
    if(a.rank != b.rank)
        return a.rank < b.rank; //rank越小越前
    if((a.cai+a.de) != (b.cai + b.de))
        return (a.cai+a.de) > (b.cai+b.de);
    if((a.cai + a.de) == (b.cai + b.de) && ((a.de)!= (b.de)))
        return a.de > b.de;//总分相同de越大越前
    return a.id < b.id;
}

int main() {
    int n, l, h, countOk = 0;
    cin >> n >> l >> h;
    vector<student> stus(n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d",&stus[i].id,&stus[i].de,&stus[i].cai);
        if (stus[i].cai >= h && stus[i].de >= h)
            stus[i].rank = 1;
        else if (stus[i].de >= h && stus[i].cai >= l && stus[i].cai < h)
            stus[i].rank = 2;
        else if (stus[i].de < h && stus[i].de >= l && stus[i].cai >= l && stus[i].cai < h && stus[i].de >= stus[i].cai)
            stus[i].rank = 3;
        else if (stus[i].de >= l && stus[i].cai >= l)
            stus[i].rank = 4;
        if (stus[i].rank < 100)
            countOk++;
    }

    sort(stus.begin(),stus.end(),compare);
    cout << countOk <<endl;
    for(int i=0;i<countOk;i++)
        printf("%d %d %d\n",stus[i].id,stus[i].de,stus[i].cai);

    return 0;
}

