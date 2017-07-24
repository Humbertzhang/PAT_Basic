#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i,n,e=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    for(i=0;i<n;i++)
        if(a[i]>n-i){  //a[i]>此天数，那么后面的都大于此天数,n-i就是结果
            e = n-i;
            break;
        }
    cout << e <<endl;
    return 0;
}
