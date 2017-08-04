/*
1,仅包含PAT三个字母
2,PAT左右两变都是A或空为正确的
3,若要在PAT之间加一个A,则应在T右边加上P左边的内容
*/
#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

int judge(string str)
{
    for(int i=0;i<str.length();i++) //不可以有其他字母
        if(str[i]!= '\101' && str[i] != '\124' && str[i] != '\120')
            return 0;
    
    //两边都是A或者空
    int indexP= str.find("P"),indexT = str.find("T");
    for(int i=0;i<indexP;i++)
        if(str[i] != 'A')
            return 0;
    for(int i=indexT+1;i<str.length();i++)
        if(str[i] != 'A')
            return 0;
    

    string pleft = str.substr(0,indexP), tright = str.substr(indexT+1,(str.length()-indexT));
    int moreA = -1;
    
    for(int i=indexP;i<indexT;i++)
        if (str[i] == 'A')
            moreA++;
    //中间没有A 
    if(moreA < 0)
        return 0;
   
    //p左边字符数*morea数<t右边字符数（因为他们都是A）
    if(pleft.length()*moreA > tright.length())
        return 0;
    
    //且若为第三条规则　则T右边除了根据PT之间的A的个数加的之外还应原本有东西，即原本的length不可为0
    if(moreA>0 && tright.length() == moreA*pleft.length()&&tright.length()!= 0)
        return 0;

    return 1;
}

int main()
{
    int i,n;
    cin >> n;
    vector <string> str(n);
    for(i=0;i<n;i++){
        cin >> str[i];
        int f = judge(str[i]);
        if(f == 1)
            cout << "YES" <<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
