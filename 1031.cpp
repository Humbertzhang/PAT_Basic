#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

class Str
{
public:
    char chs[18];
    int flag;

    void SetStr(char * ch){
            memcpy(chs,ch,18);
            flag = 1;
    }

    void isnum()
    {
        int i;
        for(i=0;i<17;i++){
            if(!(isdigit(chs[i]))) {
                flag = 0;
                break;
            }
        }
    }

    void checkout()
    {
        int result=0,i;
        char rst;
        int a[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
        char corr[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
        for(i=0;i<17;i++){
            result += (chs[i]-'0')*a[i];
        }
        result = result % 11;
        rst = corr[result];
        if (rst != chs[17])
            this->flag=0;
    }
};

int main()
{
    int n,i,count=0;
    cin >> n;
    Str strings[n];
    for(i=0;i<n;i++){
        char temp[18];
        cin >> temp;
        strings[i].SetStr(temp);
        strings[i].isnum();

        if(strings[i].flag==1)
            strings[i].checkout();

        if(strings[i].flag==1)
            count++;
        else
            cout << temp <<endl;
    }
    if(count == n)
        cout << "All passed" <<endl;
    return 0;
}