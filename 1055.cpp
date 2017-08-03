/*
string用法1:直接用<>号来代替strcmp
string用法2:直接用+来拼接字符串

compare用法:返回true则按第一个之后第二个排列
            返回false则按第二个之后再第一个排列

sort + vector: sort(vector.begin(),vector.end(),cmpfunc)
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct student
{
    string name;
    int height;
};

//按照身高降序，字母序升序排列,身高相同时再看名字
bool compare(struct student a, struct student b)
{
    if(a.height != b.height)
        return a.height>b.height; //return True Or False
    else
        return a.name < b.name;
}

int main()
{
    int i,n,k;
    cin >> n >> k;
    vector <struct student> students(n);
    for(i=0;i<n;i++)
        cin >> students[i].name >> students[i].height;
    sort(students.begin(),students.end(),compare);
    int raw_normal = n/k,raw_last=n/k + n % k;

    for(i = 0;i<n;)
    {
        string output = "";
        int flag = 0;
        if(i == 0)   //flag=1,最后一排,否则普通排
            flag = 1;
        else
            flag = 0;
        output = students[i].name;
        ++i;
        for(int j=1;j<(flag==1?raw_last:raw_normal);j++,i++){
            //按照身高来排列这一排怎么输出，并加到output中
            if (j % 2 == 1)
                output = students[i].name + " " + output;
            else
                output = output + " " + students[i].name;
        }
        cout << output <<endl;
    }
    return 0;
}
