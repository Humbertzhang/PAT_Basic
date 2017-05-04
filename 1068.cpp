/********************************
*   坑主要有：                    *
*    1,要检测上下左右行列的所有点     *
*    这个可以用在周围加上一圈0来解决   *    
*    2,要注意差值要加绝对值          *
********************************/

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int abs(int x)
{ 
    if(x<0) return -x;
    else    return x;  
}

int main()
{
        map<int,int> input;
        int m,n,tol;
        int outm=-1,outn=-1,outdot=-1;
        int cnt = 0;
        cin >> m >> n >> tol;
        int a[n+2][m+2]={0};
        int i,j;
        for(i=1;i<=n;i++){
                for(j=1;j<=m;j++){
                        cin >> a[i][j];
                        if(input[a[i][j]]==0){
                            input[a[i][j]]=1;
                        }else{
                            input[a[i][j]]=2;
                        }
                }
        }

        //check the point without up,down,left,right.
        for(i=1;i<=n;i++){
                for(j=1;j<=m;j++){
                        if(input[a[i][j]]==1&&(abs(a[i][j]-a[i-1][j-1])>tol)&&(abs(a[i][j]-a[i-1][j])>tol)&&(abs(a[i][j]-a[i-1][j+1])>tol)&&(abs(a[i][j]-a[i][j-1])>tol)&&(abs(a[i][j]-a[i][j+1])>tol)&&(abs(a[i][j]-a[i+1][j-1])>tol)&&(abs(a[i][j]-a[i+1][j])>tol)&&(abs(a[i][j]-a[i+1][j+1]>tol))){ 
                            outm = j;
                            outn = i;
                            cnt += 1;            
                        }
                }
        }
        if(cnt == 0){
                cout<<"Not Exist"<<endl;
        }
        else if(cnt >=2){
                cout<<"Not Unique"<<endl;
        }
        else if(cnt == 1){
                printf("(%d, %d): %d",outm,outn,a[outn][outm]);
        }
        return 0;
}
