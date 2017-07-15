#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int i,j;
    long long int n,p;
    cin >> n >>p;

    long long int a[n];
    int cnt;

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    int result = 1;
    
    for(i=0;i<=n-2;i++)
        for(j=i+result;j<=n-1;j++){
            if(a[j]>a[i]*p)
                break;
            result = max(result,j-i+1);
        }

    cout << result <<endl;
    return 0;
}
