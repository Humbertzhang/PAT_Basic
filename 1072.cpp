#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    int stus, objs;
    cin >> stus >> objs;
    vector<int> fobj(objs);
    for(int i = 0;i < objs; i++)
        cin >> fobj[i];
    int catchstu = 0, catchobj = 0;
    
    for(int i = 0; i < stus; i++){
        char name[5];
        int objnum;
        bool flag = false; //记录是否被记录过 
        cin >> name >> objnum;
        vector<int> onesobjs(objnum);
        vector<int> findedobjs;
        for(int j = 0; j < objnum; j++){
            cin >> onesobjs[j];
            for(int k = 0; k < objs; k++){
                if(onesobjs[j] == fobj[k]){
                    findedobjs.push_back(onesobjs[j]);
                    catchobj += 1;
                    if(!flag){
                        flag = true;
                        catchstu += 1;
                    }
                }
            }
        }
        if(flag){
            cout << name << ":";
            for(int q = 0; q < findedobjs.size(); q++)
                cout << " " << findedobjs[q];
            cout << endl;
        }
    }
    printf("%d %d\n",catchstu, catchobj);
    return 0;
}
